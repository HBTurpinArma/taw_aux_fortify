class cfgPatches
{
	class TAW_AUX_FORTIFY
	{
		name="TAW Aux Fortify";
		author="TAW";
		requiredAddons[]={	
			"cba_main",
			"ace_main"
		};
		requiredVersion=1.0;
		weapons[]={};
		units[]={
			"B_Truck_01_FOB_F", "B_Slingload_01_FOB_F", 
			"B_Slingload_01_Medevac_F", 
			"TAW_Terminal_Air_Laptop", "TAW_Terminal_Car_Laptop", "TAW_Terminal_Boat_Laptop",
			"TAW_Terminal_Air_Spawn", "TAW_Terminal_Car_Spawn", "TAW_Terminal_Boat_Spawn",
			"TAW_Resupply_Spawn",
			"TAW_Resupply_ACEArsenal",
			// "TAW_Resupply_AmmoCrate", "TAW_Resupply_UtilityCrate", "TAW_Resupply_MedicalCrate", "TAW_Resupply_ExplosiveCrate",
			"TAW_Supplies_Barrel", "TAW_Supplies_Box", "TAW_Supplies_Ammo",
		};
	};
};