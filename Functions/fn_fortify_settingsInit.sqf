/*
    Function: TAW_fnc_fortify_settingsInit
    Description:
        Initializes the CBA settings for TAW FOBs.
*/

if(isClass (configFile >> "CfgPatches" >> "cba_main")) then {
	[
		"TAW_FOB_Debug", "CHECKBOX", 
		["Debug Mode", "Enable Debug Mode for logging when a function is called."], 
		["TAW", "FOB Settings"], 
		false,
		0, 
		{params["_value"]; TAW_FOB_Debug = _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_List", "EDITBOX", 
		["FOB List", "Enter list of vehicles/objects to be considered an FOB. Example: [""B_Truck_01_FOB_F"",""B_Slingload_01_FOB_F""]"], 
		["TAW", "FOB Settings"], 
		"[""B_Truck_01_FOB_F"",""B_Slingload_01_FOB_F""]",
		0, 
		{params["_value"]; TAW_FOB_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Range", "SLIDER", 
		["FOB Range", "Select the range at which the FOB covers, this will be a radius around the FOB where players can build."], 
		["TAW", "FOB Settings"], 
		[0, 1000, 100, 0],
		0, 
		{params["_value"]; TAW_FOB_Range = _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Teleport", "CHECKBOX", 
		["FOB Teleport", "Allow players to teleport to FOBs when they are operational."], 
		["TAW", "FOB Settings"], 
		true,
		0, 
		{params["_value"]; TAW_FOB_Teleport = _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Spawn", "CHECKBOX", 
		["FOB Spawnpoint", "Allow players to spawn at FOBs when they are operational."], 
		["TAW", "FOB Settings"], 
		true,
		0, 
		{params["_value"]; TAW_FOB_Spawn = _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Resupply", "CHECKBOX", 
		["FOB Resupply", "Allow players to spawn their resupply boxes at FOBs."], 
		["TAW", "FOB Settings"], 
		true,
		0, 
		{params["_value"]; TAW_FOB_Resupply = _value;}
	] call CBA_fnc_addSetting;
} else { 
   // Defaults for these settings if CBA is not loaded to modify these.
   TAW_FOB_Debug = false;
   TAW_FOB_List = [];
   TAW_FOB_Range = 100;
   TAW_FOB_Teleport = true;
   TAW_FOB_Spawn = true;
   TAW_FOB_Resupply = true;
};

