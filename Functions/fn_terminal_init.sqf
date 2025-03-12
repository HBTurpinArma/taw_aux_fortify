/*
    Function: TAW_fnc_terminal_init
    Description:
        Initializes the Vehicle Spawner Terminal and populates the list with vehicles.
*/

if (!hasInterface) exitWith {}; 

disableSerialization;

waitUntil{!isNull (findDisplay 38100)};

private _terminal_type = "All";
if(!(isNil "TAW_VehicleSpawner_Type")) then {_terminal_type = TAW_VehicleSpawner_Type};

if (TAW_VehicleSpawner_Debug) then {
	systemChat format ["TAW_fnc_terminal_init (terminal_type: %1 | param_type: %2)", _terminal_type, typeName _terminal_type]; 
};

private _control = ((findDisplay 38100) displayCtrl 38101);

if((lnbSize 38101) select 0 > -1) then {
	lnbClear _control;
};

private _vehicle_list = [];
if(typeName _terminal_type == "STRING") then {
	_vehicle_list = switch (_terminal_type) do
	{
		case "All": {(TAW_VehicleSpawner_Air_List + TAW_VehicleSpawner_Car_List + TAW_VehicleSpawner_Boat_List + TAW_VehicleSpawner_Drone_List + TAW_VehicleSpawner_Support_List)};
		case "Air": {(TAW_VehicleSpawner_Air_List + TAW_VehicleSpawner_Drone_List + TAW_VehicleSpawner_Support_List)};
		case "Car": {(TAW_VehicleSpawner_Car_List)};
		case "Armored": {(TAW_VehicleSpawner_Car_List)};
		case "Boat": {(TAW_VehicleSpawner_Boat_List)};
		case "Ship": {(TAW_VehicleSpawner_Boat_List)};
		case "Drone": {(TAW_VehicleSpawner_Drone_List)};
		case "Autonomous": {(TAW_VehicleSpawner_Drone_List)};
		case "Support": {(TAW_VehicleSpawner_Support_List)};
		default {(TAW_VehicleSpawner_Air_List + TAW_VehicleSpawner_Car_List + TAW_VehicleSpawner_Drone_List + TAW_VehicleSpawner_Support_List)};
	};
} else {
	if typeName _terminal_type == "ARRAY" then {
		_vehicle_list = _terminal_type;
	};
};

if ((count _vehicle_list) == 0) exitWith {hint "There was an error and no vehicles could be fetched!"};

private _row = 0;
{
	private _vehicle_info = [_x select 0] call TAW_fnc_terminal_vehicleInfo;
	if(count _vehicle_info > 0) then {
		private _vehicle_cost = 0;

		if (TAW_VehicleSpawner_Spawn_Cost) then {
			_vehicle_cost = (_x select 1);
		};

		_control lnbAddRow["",_vehicle_info select 3, "", format ["Cost: %1", _vehicle_cost]];
		_control lnbSetPicture[[_row,0],(_vehicle_info select 2)];
		_control lnbSetData[[_row,0],(_x select 0)]; //Set the classname to index/column 0
		_control lnbSetData[[_row,1],(_vehicle_info select 3)]; //Set the displayName to index/column 1
		_control lnbSetData[[_row,2],format ["%1", _vehicle_cost]]; //Set the cost to index/column 2
		_control lnbSetData[[_row,3],(_vehicle_info select 4)]; //Set the vehicleClass to index/column 3
		_row = _row + 1;

		//systemChat format ["%1, %2, %3", _x select 0, _x select 1, getText(configFile >> "CfgVehicles" >> _x select 0 >> "vehicleClass")]; 
	};
} foreach _vehicle_list;