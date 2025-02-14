/* =================================================
*   Author: HBTurpin
*
*	Params:
*	None
*
*	Returns:
*	Nothing
*
* =================================================*/

// FOB Settings
if(isClass (configFile >> "CfgPatches" >> "cba_main")) then {
	[
		"TAW_FOB_List", "EDITBOX", 
		["FOB List", "Enter list of vehicles/objects to be considered an FOB. Example: [""B_Truck_01_FOB_F"",""B_Slingload_01_FOB_F""]"], 
		["TAW", "FOB Settings"], 
		"[""B_Truck_01_FOB_F"",""B_Slingload_01_FOB_F""]",
		0, 
		{TAW_FOB_List = parseSimpleArray _this;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Range", "SLIDER", 
		["FOB Range", "Select the range at which the FOB covers, this will be a radius around the FOB where players can build."], 
		["TAW", "FOB Settings"], 
		[0, 1000, 100, 0],
		0, 
		{TAW_FOB_Range = _this;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Teleport", "CHECKBOX", 
		["FOB Teleport", "Allow players to teleport to FOBs when they are operational."], 
		["TAW", "FOB Settings"], 
		true,
		0, 
		{TAW_FOB_Teleport = _this;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Spawn", "CHECKBOX", 
		["FOB Spawnpoint", "Allow players to spawn at FOBs when they are operational."], 
		["TAW", "FOB Settings"], 
		true,
		0, 
		{TAW_FOB_Spawn = _this;}
	] call CBA_fnc_addSetting;

	[
		"TAW_FOB_Resupply", "CHECKBOX", 
		["FOB Resupply", "Allow players to spawn their resupply boxes at FOBs."], 
		["TAW", "FOB Settings"], 
		true,
		0, 
		{TAW_FOB_Resupply = _this;}
	] call CBA_fnc_addSetting;
} else { 
   // Defaults for these settings if CBA is not loaded to modify these.
   TAW_FOB_List = [];
   TOB_FOB_Range = 100;
   TAW_FOB_Teleport = true;
   TAW_FOB_Spawn = true;
   TAW_FOB_Resupply = true;
};

