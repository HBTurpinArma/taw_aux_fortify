/*
    Function: TAW_fnc_terminal_open
    Description:
        Opens the Vehicle Spawner Terminal for the player that calls the function.
*/

params ["_terminal_type"];

//Logging for debug mode
if (TAW_VehicleSpawner_Debug) then {
	systemChat format ["TAW_fnc_terminal_open (terminal_type: %1 | param_type: %2)", _terminal_type, typeName _terminal_type];
};

TAW_VehicleSpawner_Type = _terminal_type;

disableSerialization;

if(!(createDialog "VVS_Menu")) exitWith {}; 