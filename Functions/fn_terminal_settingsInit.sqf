/*
    Function: TAW_fnc_terminal_settingsInit
    Description:
        Initializes the CBA settings for TAW Resources & Vehicle Spawner Terminal
*/

if(isClass (configFile >> "CfgPatches" >> "cba_main")) then {

	[
		"TAW_VehicleSpawner_Spawn_Time", "SLIDER", 
		["Terminal Spawn Time", "Select the time at which it takes to spawn a vehicle from a terminal."], 
		["TAW", "Vehicle Terminal Settings"], 
		[0, 60, 10, 0],
		0, 
		{params["_value"]; TAW_VehicleSpawner_Spawn_Time = _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Spawn_Range", "SLIDER", 
		["Terminal Spawn Range", "Select the range at which a spawn location needs to be from the terminal to spawn at."], 
		["TAW", "Vehicle Terminal Settings"], 
		[0, 300, 100, 0],
		0, 
		{params["_value"]; TAW_VehicleSpawner_Spawn_Range = _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Spawn_Cost", "CHECKBOX", 
		["Vehicle Cost Resources", "Should spawning vehicles from the terminal cost resources?"], 
		["TAW", "Vehicle Terminal Settings"], 
		false,
		0, 
		{params["_value"]; TAW_VehicleSpawner_Spawn_Cost = _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Air_List", "EDITBOX", 
		["Air Assets", "Enter list of vehicles/objects that should be spawnable at the aircraft terminal. Example: [[""FIR_AV8B"",100],[""Valor_Turret_Transport_CrewGun_F"",200]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""FIR_AV8B"",100],[""Valor_Turret_Transport_CrewGun_F"",200]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Air_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Car_List", "EDITBOX", 
		["Ground Vehicle Assets", "Enter list of vehicles/objects that should be spawnable at the ground vehicle terminal. Example: [[""B_Quadbike_01_F"",50],[""B_LSV_02_armed_F_custom_recon"",100]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_LSV_02_armed_F_custom_recon"",100], [""B_Quadbike_01_F"",50]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Car_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Boat_List", "EDITBOX", 
		["Boat Assets", "Enter list of vehicles/objects that should be spawnable at the boat terminal. Example: [[""B_Boat_Transport_01_F"",50],[""B_Boat_Armed_01_miningun_F"",150]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_Boat_Transport_01_F"",50],[""B_Boat_Armed_01_miningun_F"",100],[""rhsusf_mkvsoc"",150],[""B_SDV_01_F"",100]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Boat_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Drone_List", "EDITBOX", 
		["Drone Assets", "Enter list of drones that should be spawnable at a terminal. Example: [[""B_Truck_01_FOB_F"",500],[""B_Slingload_01_FOB_F"",500]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_T_UAV_03_dynamicLoadout_F_mk2"",200],[""B_UAV_05_F_mk2"",200],[""B_UAV_02_dynamicLoadout_F_mk2"",200],[""B_UGV_01_rcws_F"",200]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Drone_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Support_List", "EDITBOX", 
		["Support Assets", "Enter list of support objects that should be spawnable at a terminal. Example: [[""B_Truck_01_FOB_F"",500],[""B_Slingload_01_FOB_F"",500]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_Truck_01_FOB_F"",1000],[""B_Slingload_01_FOB_F"",1000],[""B_Slingload_01_Medevac_F"",600]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Support_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

} else { 
   	// Defaults for these settings if CBA is not loaded to modify these.
	TAW_VehicleSpawner_Spawn_Time = 10;
	TAW_VehicleSpawner_Spawn_Range = 100;
	TAW_VehicleSpawner_Spawn_Cost = false;
   	TAW_VehicleSpawner_Air_List = [];
   	TAW_VehicleSpawner_Car_List = [];
	TAW_VehicleSpawner_Boat_List = [];
	TAW_VehicleSpawner_Drone_List = [];
	TAW_VehicleSpawner_Support_List = [];
};

