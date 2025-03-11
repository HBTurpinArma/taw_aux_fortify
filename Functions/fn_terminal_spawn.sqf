/*
    Function: TAW_fnc_terminal_spawn
    Description:
        Spawns a vehicle at a valid spawn location around the terminal.
*/

private _player = player;

disableSerialization;

//Get selected row in the UI and its data.
if(lnbCurSelRow 38101 == -1) exitWith {systemChat "You did not select a vehicle to spawn!"};

private _className = lnbData[38101,[(lnbCurSelRow 38101),0]];
private _displayName = lnbData[38101,[(lnbCurSelRow 38101),1]];
private _cost = parseNumber (lnbData[38101,[(lnbCurSelRow 38101),2]]);
private _vehicleClass = lnbData[38101,[(lnbCurSelRow 38101),3]];

//Logging for debug mode
if (TAW_VehicleSpawner_Debug) then {
	systemChat format ["TAW_fnc_terminal_spawn (classname: %1 | displayname: %2 | cost: %3)", _className, _displayName, lnbData[38101,[(lnbCurSelRow 38101),2]]];
};

//Search for valid spawn locations around the terminal.
private _spawn_locations = [_player, _vehicleClass] call TAW_fnc_terminal_findSpawnLocation;
if (count _spawn_locations <= 0) exitWith {systemChat "There are no spawn locations nearby."};

private _valid_spawn_locations = [];
{
	private _vehicles_nearby = nearestObjects [getPos _x, ["LandVehicle","Air","Ship"], 12];

	if (count _vehicles_nearby == 0) then {
		_valid_spawn_locations append [_x];
	};
} forEach _spawn_locations;

//Make sure there are valid locations.
if (count _valid_spawn_locations <= 0) exitWith {systemChat "There are no valid spawn locations nearby, there could be vehicles too close to spawn point."};

//Select the first valid spawn location.
private _spawn = _valid_spawn_locations select 0;
private _spawn_position = getPos _spawn;
private _spawn_direction = direction _spawn;

//Check again to make sure the spawn point doesn't have a vehicle on it, if it does then stop the spawn.
// private _vehicles_nearby = nearestObjects [_spawn_position, ["LandVehicle","Air","Ship"], 12];
// if (count _vehicles_nearby > 0) exitWith {systemChat "There are vehicles too close to the spawn location, cancelling spawn."};

//Check if the player has enough budget to spawn the vehicle. -1 == infinite.
private _budget = [side group _player] call ace_fortify_fnc_getBudget;
private _newBudget = _budget - _cost;

if ((_budget != -1) and (_newBudget < 0)) exitWith {systemChat "You do not have enough budget to spawn this vehicle."};

//Create the vehicle.
_vehicle = _className createVehicle _spawn_position;
_vehicle allowDamage false;
_vehicle setPos _spawn_position; //Make sure it gets set onto the position.
_vehicle setDir _spawn_direction; //Set the vehicles direction the same as the marker.

// Check if the vehicle is a UAV in config, if so create a crew for it.
if (getNumber(configFile >> "CfgVehicles" >> _className >> "isUav") == 1) then {
	createVehicleCrew _vehicle;
};

//Remove the cost from the budget.
[side group _player, _cost] call ace_fortify_fnc_updateBudget;

//Cleanup inventory of vehicle.
clearWeaponCargoGlobal _vehicle;
clearMagazineCargoGlobal _vehicle;
clearItemCargoGlobal _vehicle;

_vehicle allowDamage true;
systemChat format["You have spent %1 resources for a %2 (%3)", _cost, _displayName, _className];

closeDialog 0;
