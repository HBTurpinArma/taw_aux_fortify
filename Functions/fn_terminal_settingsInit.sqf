/*
    Function: TAW_fnc_terminal_settingsInit
    Description:
        Initializes the CBA settings for TAW Resources & Vehicle Spawner Terminal
*/

if(isClass (configFile >> "CfgPatches" >> "cba_main")) then {

	[
		"TAW_VehicleSpawner_Debug", "CHECKBOX", 
		["Debug Mode", "Enable Debug Mode for logging when a function is called."], 
		["TAW", "Vehicle Terminal Settings"], 
		false,
		0, 
		{params["_value"]; TAW_VehicleSpawner_Debug = _value;}
	] call CBA_fnc_addSetting;

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

	// FIR_AV8B
	// Valor_Turret_Transport_CrewGun_F
	// Valor_Attack_F
	// Valor_Transport_Armed_F
	// B_T_VTOL_01_infantry_F
	// B_T_VTOL_01_vehicle_F
	// B_T_VTOL_01_armed_F
	// JK_B_US_C5M_Super_Galaxy_F
	// RHSGREF_A29B_HIDF
	// USAF_A10
	// USAF_C130J
	// USAF_F22
	// USAF_F35A
	// RHS_UH60M_d
	// RHS_CH_47F_10
	// B_Heli_Transport_03_F
	// RHS_AH64D
	// B_Heli_Attack_01_dynamicLoadout_F
	// RHS_MELB_MH6M
	// RHS_MELB_AH6M

	[
		"TAW_VehicleSpawner_Air_List", "EDITBOX", 
		["Air Assets", "Enter list of vehicles/objects that should be spawnable at the aircraft terminal. Example: [[""FIR_AV8B"",100],[""Valor_Turret_Transport_CrewGun_F"",200]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""FIR_AV8B"",500], [""RHSGREF_A29B_HIDF"", 700], [""USAF_A10"", 700], [""USAF_F22"", 600], [""USAF_F35A"", 600], [""JK_B_US_C5M_Super_Galaxy_F"", 800], [""USAF_C130J"", 800], [""RHS_UH60M_d"", 500], [""RHS_MELB_MH6M"", 400], [""RHS_MELB_AH6M"", 500], [""RHS_CH_47F_10"", 600], [""B_Heli_Transport_03_F"", 600], [""RHS_AH64D"", 700], [""B_Heli_Attack_01_dynamicLoadout_F"", 700], [""Valor_Turret_Transport_CrewGun_F"",500], [""Valor_Attack_F"",400], [""Valor_Transport_Armed_F"",300], [""B_T_VTOL_01_infantry_F"", 500], [""B_T_VTOL_01_vehicle_F"", 500], [""B_T_VTOL_01_armed_F"", 500]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Air_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	// B_LSV_02_armed_F_custom_recon
	// B_Quadbike_01_F

	[
		"TAW_VehicleSpawner_Car_List", "EDITBOX", 
		["Ground Vehicle Assets", "Enter list of vehicles/objects that should be spawnable at the ground vehicle terminal. Example: [[""B_Quadbike_01_F"",50],[""B_LSV_02_armed_F_custom_recon"",100]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_LSV_02_armed_F_custom_recon"",200], [""B_Quadbike_01_F"",100]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Car_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	// B_Boat_Transport_01_F
	// B_Boat_Armed_01_miningun_F
	// rhsusf_mkvsoc
	// B_SDV_01_F

	[
		"TAW_VehicleSpawner_Boat_List", "EDITBOX", 
		["Boat Assets", "Enter list of vehicles/objects that should be spawnable at the boat terminal. Example: [[""B_Boat_Transport_01_F"",50],[""B_Boat_Armed_01_miningun_F"",150]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_Boat_Transport_01_F"",100],[""B_Boat_Armed_01_miningun_F"",200],[""rhsusf_mkvsoc"",400],[""B_SDV_01_F"",100]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Boat_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	// USAF_MQ9
	// USAF_RQ4A
	// B_T_UAV_03_dynamicLoadout_F_mk2
	// B_UAV_05_F_mk2
	// B_UAV_02_dynamicLoadout_F_mk2
	// B_UGV_01_rcws_F

	[
		"TAW_VehicleSpawner_Drone_List", "EDITBOX", 
		["Drone Assets", "Enter list of drones that should be spawnable at a terminal. Example: [[""B_Truck_01_FOB_F"",500],[""B_Slingload_01_FOB_F"",500]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""USAF_MQ9"", 400],[""USAF_RQ4A"", 400],[""B_T_UAV_03_dynamicLoadout_F_mk2"",400],[""B_UAV_05_F_mk2"",400],[""B_UAV_02_dynamicLoadout_F_mk2"",400],[""B_UGV_01_rcws_F"",200]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Drone_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	// B_Truck_01_FOB_F
	// B_Slingload_01_FOB_F
	// B_Slingload_01_Medevac_F

	[
		"TAW_VehicleSpawner_Support_List", "EDITBOX", 
		["Support Assets", "Enter list of support objects that should be spawnable at a terminal. Example: [[""B_Truck_01_FOB_F"",500],[""B_Slingload_01_FOB_F"",500]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_Truck_01_FOB_F"",1000],[""B_Slingload_01_FOB_F"",1000],[""B_Slingload_01_Medevac_F"",600],[""TAW_Resupply_ACEArsenal"",50]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Support_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;


	[
		"TAW_Supplies_List", "EDITBOX", 
		["Supplies List", "Enter list of supply objects which can be recovered at a terminal. Example: [[""TAW_Supplies_Barrel"",500],[""TAW_Supplies_Box"",500],[""TAW_Supplies_Ammo"",500]]"], 
		["TAW", "Supplies Settings"], 
		"[[""TAW_Supplies_Barrel"",500],[""TAW_Supplies_Box"",500],[""TAW_Supplies_Ammo"",500]]",
		0, 
		{params["_value"]; TAW_Supplies_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

} else { 
   	// Defaults for these settings if CBA is not loaded to modify these.
	TAW_VehicleSpawner_Debug = false;
	TAW_VehicleSpawner_Spawn_Time = 10;
	TAW_VehicleSpawner_Spawn_Range = 100;
	TAW_VehicleSpawner_Spawn_Cost = false;
   	TAW_VehicleSpawner_Air_List = [];
   	TAW_VehicleSpawner_Car_List = [];
	TAW_VehicleSpawner_Boat_List = [];
	TAW_VehicleSpawner_Drone_List = [];
	TAW_VehicleSpawner_Support_List = [];
	TAW_Supplies_List = [["TAW_Supplies_Barrel",500],["TAW_Supplies_Box",500],["TAW_Supplies_Ammo",500]];
};

