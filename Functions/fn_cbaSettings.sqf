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
[
	"TAW_FOB_List", "EDITBOX", 
	["FOB List", "Enter list of vehicles/objects to be considered an FOB. This  Example: [""ItemGPS"",""B_UavTerminal""]"], 
	["TAW", "FOB Settings"], 
	"[""ItemGPS"",""B_UavTerminal"",""O_UavTerminal"",""I_UavTerminal"",""C_UavTerminal"",""I_E_UavTerminal"",""ItemcTab"",""ItemAndroid"",""ItemMicroDAGR"",""ACE_DAGR"",""ACE_microDAGR""]",
	0, 
	{TAW_FOB_List = parseSimpleArray _this;}
] call CBA_fnc_addSetting;

[
	"TAW_FOB_Range", "SLIDER", 
	["FOB Range", "Select the range at which the FOB covers, this will be a radius around the FOB where players can build."], 
	["TAW", "FOB Settings"], 
	[0, 1000, 100, 0],
	0, 
	{TOB_FOB_Range = parseNumber _this;}
] call CBA_fnc_addSetting;

[
	"TAW_FOB_Teleport", "CHECKBOX", 
	["FOB Teleport", "Allow players to teleport to FOBs when they are operational."], 
	["TAW", "FOB Settings"], 
	true,
	0, 
	{TAW_FOB_List = parseNumber _this;}
] call CBA_fnc_addSetting;

[
	"TAW_FOB_Spawn", "CHECKBOX", 
	["FOB Spawnpoint", "Allow players to spawn at FOBs when they are operational."], 
	["TAW", "FOB Settings"], 
	true,
	0, 
	{TAW_FOB_List = parseNumber _this;}
] call CBA_fnc_addSetting;

[
	"TAW_FOB_Resupply", "CHECKBOX", 
	["FOB Resupply", "Allow players to spawn their resupply boxes at FOBs."], 
	["TAW", "FOB Settings"], 
	true,
	0, 
	{TAW_FOB_List = parseNumber _this;}
] call CBA_fnc_addSetting;



