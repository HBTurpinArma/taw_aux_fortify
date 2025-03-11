/*
    Function: TAW_fnc_terminal_open
    Description:
        Opens the Vehicle Spawner Terminal for the player that calls the function.
*/

params ["_terminal_type"];

//systemChat format ["TAW_fnc_terminal_open (terminal_type: %1 | param_type: %2)", _terminal_type, typeName _terminal_type];

if(typeName _terminal_type == "STRING") then {
	if (_terminal_type == "") exitWith {closeDialog 0};
	TAW_VehicleSpawner_Type = _terminal_type;
} else {
	closeDialog 0;
};

disableSerialization;

if(!(createDialog "VVS_Menu")) exitWith {}; 