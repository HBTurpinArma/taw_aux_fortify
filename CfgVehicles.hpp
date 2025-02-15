class cfgVehicles
{
	class B_Truck_01_box_F;
	class B_Truck_01_FOB_F: B_Truck_01_box_F
	{
		displayName = "HEMTT FOB Container [TAW]";
	};


	class B_Slingload_01_Cargo_F;
	class B_Slingload_01_FOB_F: B_Slingload_01_Cargo_F
	{
		displayName = "Huron FOB Container [TAW]";
	};

	class Slingload_01_Base_F;
	class B_Slingload_01_Medevac_F: Slingload_01_Base_F
	{
		displayName = "Huron Medical Container [TAW]";
		class UserActions
		{
			class ACE_FullHeal
			{
				displayName = "<t color='#FF0000'>Heal</t>";
				priority = 50;
				radius = 5;
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "true";
				statement = "[objNull, player] call ace_medical_treatment_fnc_fullHeal";
			};
		};
	};
};