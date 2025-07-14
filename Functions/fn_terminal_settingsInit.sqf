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

	[
		"TAW_VehicleSpawner_Air_List", "EDITBOX", 
		["Air Assets", "Enter list of vehicles/objects that should be spawnable at the aircraft terminal. Example: [[""FIR_AV8B"",500],[""Valor_Turret_Transport_CrewGun_F"",200]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_Plane_Fighter_01_F"",500],[""FIR_AV8B"",500],[""RHSGREF_A29B_HIDF"",300],[""USAF_A10"",600],[""USAF_F22"",550],[""USAF_F35A"",700],[""ua_haf_jas_39"",450],[""rhs_l159_cdf_b_CDF"",350],[""JK_B_US_C5M_Super_Galaxy_F"",700],[""USAF_C130J"",600],[""RHS_UH60M_d"",225],[""B_Heli_Transport_01_F"",225],[""RHS_MELB_MH6M"",175],[""RHS_MELB_AH6M"",275],[""rhsusf_CH53E_USMC"",350],[""RHS_CH_47F_10"",300],[""B_Heli_Transport_03_F"",300],[""RHS_AH64D"",600],[""O_Heli_Attack_02_dynamicLoadout_F"",600],[""B_Heli_Attack_01_dynamicLoadout_F"",400],[""RHS_AH1Z"",450],[""Valor_Turret_Transport_CrewGun_F"",350],[""Valor_Attack_F"",400],[""Valor_Transport_Armed_F"",275],[""B_T_VTOL_02_infantry_dynamicLoadout_F"",500],[""B_T_VTOL_02_vehicle_dynamicLoadout_F"",500],[""B_T_VTOL_01_infantry_F"",250],[""B_T_VTOL_01_vehicle_F"",250],[""B_T_VTOL_01_armed_F"",400],[""B_Heli_Transport_04_F"",200]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Air_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Car_List", "EDITBOX", 
		["Ground Vehicle Assets", "Enter list of vehicles/objects that should be spawnable at the ground vehicle terminal. Example: [[""B_Quadbike_01_F"",50],[""B_LSV_02_armed_F_custom_recon"",100]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""rhsusf_m1151_m2_v1_usarmy_d"",250],[""rhsusf_m1240a1_m240_uik_usarmy_d"",400],[""B_MRAP_01_F"",200],[""B_MRAP_01_hmg_F"",400],[""B_LSV_01_unarmed_F"",150],[""B_LSV_01_armed_F"",200],[""B_LSV_02_armed_F_custom_recon"",200],[""B_Quadbike_01_F"",100],[""B_Truck_01_transport_F"",300]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Car_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Boat_List", "EDITBOX", 
		["Boat Assets", "Enter list of vehicles/objects that should be spawnable at the boat terminal. Example: [[""B_Boat_Transport_01_F"",50],[""B_Boat_Armed_01_miningun_F"",150]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_Boat_Transport_01_F"",100],[""B_Boat_Armed_01_miningun_F"",200],[""rhsusf_mkvsoc"",400],[""B_SDV_01_F"",100]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Boat_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Drone_List", "EDITBOX", 
		["Drone Assets", "Enter list of drones that should be spawnable at a terminal. Example: [[""B_UAV_05_F_mk2"",400],[""B_UAV_02_dynamicLoadout_F_mk2"",400]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""USAF_MQ9"",300],[""USAF_RQ4A"",200],[""B_T_UAV_03_dynamicLoadout_F_mk2"",400],[""B_UAV_05_F_mk2"",400],[""B_UAV_02_dynamicLoadout_F_mk2"",400],[""B_UGV_01_rcws_F"",150]]",
		0, 
		{params["_value"]; TAW_VehicleSpawner_Drone_List = parseSimpleArray _value;}
	] call CBA_fnc_addSetting;

	[
		"TAW_VehicleSpawner_Support_List", "EDITBOX", 
		["Support Assets", "Enter list of support objects that should be spawnable at a terminal. Example: [[""B_Truck_01_FOB_F"",500],[""B_Slingload_01_FOB_F"",500]]"], 
		["TAW", "Vehicle Terminal Settings"], 
		"[[""B_Truck_01_FOB_F"",800],[""B_Slingload_01_FOB_F"",800],[""B_Slingload_01_Medevac_F"",250],[""TAW_Resupply_ACEArsenal"",50],[""B_Truck_01_fuel_F"",250],[""B_Truck_01_ammo_F"",250],[""Land_Pod_Heli_Transport_04_bench_black_F"",50],[""Land_Pod_Heli_Transport_04_covered_black_F"",75],[""Land_Pod_Heli_Transport_04_medevac_black_F"",75],[""Land_Pod_Heli_Transport_04_fuel_black_F"",200],[""Land_Pod_Heli_Transport_04_repair_black_F"",200],[""Land_Pod_Heli_Transport_04_ammo_black_F"",200]]",
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

