class cfgVehicles
{
	//FOBs
	class B_Truck_01_box_F;
	class B_Truck_01_FOB_F: B_Truck_01_box_F {
		displayName = "HEMTT FOB Container [TAW]";

		class TransportBackpacks {
		};
		class TransportWeapons {
		};
		class TransportItems {
		};
		class TransportMagazines {
		};
	};


	class B_Slingload_01_Cargo_F;
	class B_Slingload_01_FOB_F: B_Slingload_01_Cargo_F {
		displayName = "Huron FOB Container [TAW]";

		class TransportBackpacks {
		};
		class TransportWeapons {
		};
		class TransportItems {
		};
		class TransportMagazines {
		};
	};

	class Slingload_01_Base_F;
	class B_Slingload_01_Medevac_F: Slingload_01_Base_F {
		displayName = "Huron Medical Container [TAW]";
		class UserActions {
			class ACE_FullHeal {
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

	//Vehicle Terminals
	class Land_Laptop_03_olive_F;


	class TAW_Terminal_Spawn_Laptop_Base: Land_Laptop_03_olive_F {
		displayName = "Useless Terminal [TAW]";
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa", ""};
		scope = 0;
		scopeCurator = 0;

		class UserActions {
			class OpenTerminal_CollectNearbySupplies {
				displayName = "<t color='#EEEEEE'>Collect Nearby Supplies</t>";
				priority = 49;
				radius = 7;
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "[player, 50] call TAW_fnc_supplies_isNearby";
				statement = "[player] call TAW_fnc_supplies_collectNearby";
			};
			//GOM Menu for Terminal?
		};

		class ACE_Actions {
			class ACE_MainActions {
				class OpenTerminal_CollectNearbySupplies {
					displayName = "Collect Nearby Supplies";
					condition = "[_player, 50] call TAW_fnc_supplies_isNearby";
					statement = "[_player] call TAW_fnc_supplies_collectNearby";
					position = [0,0,0];
					distance = 2;
					icon = "";
				};
			};
        };
	};

	class TAW_Terminal_Air_Laptop: TAW_Terminal_Spawn_Laptop_Base {
		displayName = "Aircraft Terminal [TAW]";
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa", ""};
		scope = 2;
		scopeCurator = 2;

		class UserActions: UserActions {
			class OpenTerminal_Aircraft {
				displayName = "Open Aircraft Terminal";
				priority = 50;
				radius = 7;
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "true";
				statement = "[""Air"", player] call TAW_fnc_terminal_open";
			};
		};

		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class OpenTerminal_Aircraft {
					displayName = "Open Aircraft Terminal";
					condition = "true";
					statement = "[""Air"", _player] call TAW_fnc_terminal_open";
					position = [0,0,0];
					distance = 2;
					icon = "";
				};
			};
        };
	};

	class TAW_Terminal_Car_Laptop: TAW_Terminal_Spawn_Laptop_Base {
		displayName = "Ground Vehicle Terminal [TAW]";
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa", ""};
		scope = 2;
		scopeCurator = 2;

		class UserActions: UserActions {
			class OpenTerminal_GroundVehicle {
				displayName = "Open Ground Vehicle Terminal";
				priority = 50;
				radius = 7;
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "true";
				statement = "[""Car""] call TAW_fnc_terminal_open";
			};
		};

		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class OpenTerminal_GroundVehicle {
					displayName = "Open Ground Vehicle Terminal";
					condition = "true";
					statement = "[""Car"", _player] call TAW_fnc_terminal_open";
					position = [0,0,0];
					distance = 2;
					icon = "";
				};
			};
        };
	};

	class TAW_Terminal_Boat_Laptop: TAW_Terminal_Spawn_Laptop_Base {
		displayName = "Boat Terminal [TAW]";
		hiddenSelectionsTextures[] = {"a3\Props_F_Enoch\Military\Equipment\data\Laptop_03_olive_CO.paa", ""};
		scope = 2;
		scopeCurator = 2;

		class UserActions: UserActions {
			class OpenTerminal_Boat {
				displayName = "Open Boat Terminal";
				priority = 50;
				radius = 7;
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "true";
				statement = "[""Boat""] call TAW_fnc_terminal_open";
			};
		};

		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class OpenTerminal_Boat {
					displayName = "Open Boat Terminal";
					condition = "true";
					statement = "[""Boat"", _player] call TAW_fnc_terminal_open";
					position = [0,0,0];
					distance = 2;
					icon = "";
				};
			};
        };
	};

	class Sign_Arrow_Yellow_F;
	class TAW_Terminal_Air_Spawn: Sign_Arrow_Yellow_F {
		displayName = "Aircraft Spawn Point [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;
	};

	class Sign_Arrow_Green_F;
	class TAW_Terminal_Car_Spawn: Sign_Arrow_Green_F {
		displayName = "Ground Vehicle Spawn Point [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;

		// class ACE_Actions {
		// 	class ACE_MainActions {
		// 		class Remove {
		// 			displayName = "Remove Spawnpoint";
		// 			condition = "";
		// 			statement = "";
		// 			icon = "";
		// 		};
		// 	};
        // };
	};

	class Sign_Arrow_Cyan_F;
	class TAW_Terminal_Boat_Spawn: Sign_Arrow_Cyan_F {
		displayName = "Boat Spawn Point [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;
	};

	class Sign_Arrow_Blue_F;
	class TAW_Resupply_Spawn: Sign_Arrow_Blue_F {
		displayName = "Resupply Spawn Point [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;
	};

	//Supplies
	class CargoNet_01_barrels_F;
	class CargoNet_01_box_F;
	class B_CargoNet_01_ammo_F;
	// class I_CargoNet_01_ammo_F;
	// class O_CargoNet_01_ammo_F;
	// class I_E_CargoNet_01_ammo_F;
	// class C_IDAP_CargoNet_01_supplies_F;
	// class Land_FoodSacks_01_cargo_brown_F;
	// class Land_FoodSacks_01_cargo_brown_idap_F;
	// class Land_FoodSacks_01_cargo_white_F;

	class TAW_Supplies_Barrel: CargoNet_01_barrels_F {
		displayName = "Supplies (Barrel) [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		
		//Ace Cargo Size
  		ace_cargo_size = 2;  
        ace_cargo_canLoad = 1; 
        ace_cargo_noRename = 1;

		//Allow Ace Dragging
		ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};  
        ace_dragging_dragDirection = 0;  
        ace_dragging_ignoreWeight = 1; 

		//Allow Ace Carry
	 	ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};  
        ace_dragging_carryDirection = 0; 
        ace_dragging_ignoreWeightCarry = 1; 

		//Event Handlers
		class EventHandlers {
			init = "(_this select 0) setVariable [""carry_force_disable"", true, true];";
		};
	};
	class TAW_Supplies_Box: CargoNet_01_box_F {
		displayName = "Supplies (Box) [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;

		//Ace Cargo Size
  		ace_cargo_size = 2;  
        ace_cargo_canLoad = 1; 
        ace_cargo_noRename = 1;

		//Allow Ace Dragging
		ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};  
        ace_dragging_dragDirection = 0;  
        ace_dragging_ignoreWeight = 1; 

		//Allow Ace Carry
	 	ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};  
        ace_dragging_carryDirection = 0; 
        ace_dragging_ignoreWeightCarry = 1; 		
		
		//Event Handlers
		class EventHandlers {
			init = "(_this select 0) setVariable [""carry_force_disable"", true, true];";
		};
	};
	class TAW_Supplies_Ammo: B_CargoNet_01_ammo_F {
		displayName = "Supplies (Ammo) [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;

		//Ace Cargo Size
  		ace_cargo_size = 2;  
        ace_cargo_canLoad = 1; 
        ace_cargo_noRename = 1;

		//Allow Ace Dragging
	 	ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};  
        ace_dragging_dragDirection = 0;  
        ace_dragging_ignoreWeight = 1; 

		//Allow Ace Carry
	 	ace_dragging_canCarry = 1;
        ace_dragging_carryPosition[] = {0, 1.2, 0};  
        ace_dragging_carryDirection = 0; 
        ace_dragging_ignoreWeightCarry = 1; 

		//Event Handlers
		class EventHandlers {
			init = "(_this select 0) setVariable [""carry_force_disable"", true, true];";
		};
	};

	//Resupply Crates
	class Box_NATO_Ammo_F;
	class Box_NATO_Support_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_WpsSpecial_F;
	class Box_NATO_Equip_F;
	class B_supplyCrate_F;

	class TAW_Resupply_ACEArsenal: B_supplyCrate_F {
		displayName="Resupply Crate [TAW]";
		hiddenSelectionsTextures[] = {"\TAW_AUX_FORTIFY\Data\Textures\supplydrop_taw_co.paa"};

		//Ace Cargo Size
  		ace_cargo_size = 6;  
        ace_cargo_canLoad = 1; 
        ace_cargo_noRename = 1;
        ace_cargo_blockUnloadCarry = 1;

		//Allow Ace Dragging
	 	ace_dragging_canDrag = 1;
        ace_dragging_dragPosition[] = {0, 1.5, 0};  
        ace_dragging_dragDirection = 0;  
        ace_dragging_ignoreWeight = 1; 

		//Disallow Ace Carry
		ace_dragging_canCarry = 0;

		//Empty Cargo
		class TransportBackpacks {};
		class TransportWeapons {};
		class TransportItems {};
		class TransportMagazines {};

		//Event Handlers
		class EventHandlers {
			init = "(_this select 0) call TAW_fnc_resupply_init";
		};
	};
	// class TAW_Resupply_AmmoCrate: Box_NATO_Ammo_F {
	// 	displayName="Ammo Resupply Crate (Blufor) [TAW]";
	// 	class TransportBackpacks {
	// 	};
	// 	class TransportWeapons {
	// 		class rhs_weap_M136
	// 		{
	// 			weapon="rhs_weap_M136";
	// 			count=5;
	// 		};
	// 	};
	// 	class TransportItems {
	// 	};
	// 	class TransportMagazines {
	// 		class TAW_AMMO_40RND_46x30_JHP_MAG
	// 		{
	// 			magazine="TAW_AMMO_40RND_46x30_JHP_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_40RND_46x30_JHP_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_40RND_46x30_JHP_TRACER_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_6RND_45ACP_CYLINDER
	// 		{
	// 			magazine="TAW_AMMO_6RND_45ACP_CYLINDER";
	// 			count=20;
	// 		};			
	// 		class TAW_AMMO_11RND_45ACP_MAG
	// 		{
	// 			magazine="TAW_AMMO_11RND_45ACP_MAG";
	// 			count=20;
	// 		};			
	// 		class TAW_AMMO_30RND_45ACP_MAG
	// 		{
	// 			magazine="TAW_AMMO_30RND_45ACP_MAG";
	// 			count=30;
	// 		};
	// 		// class TAW_AMMO_30RND_45ACP_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_30RND_45ACP_TRACER_MAG";
	// 		// 	count=30;
	// 		// };
	// 		class TAW_AMMO_15RND_9x19_JHP_MAG
	// 		{
	// 			magazine="TAW_AMMO_15RND_9x19_JHP_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_15RND_9x19_JHP_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_15RND_9x19_JHP_TRACER_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_30RND_9x19_JHP_MAG
	// 		{
	// 			magazine="TAW_AMMO_30RND_9x19_JHP_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_30RND_9x19_JHP_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_30RND_9x19_JHP_TRACER_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_18RND_9x21_MAG
	// 		{
	// 			magazine="TAW_AMMO_18RND_9x21_MAG";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_30RND_9x21_MAG
	// 		{
	// 			magazine="TAW_AMMO_30RND_9x21_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_30RND_9x21_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_30RND_9x21_TRACER_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_30RND_556x45_MAG
	// 		{
	// 			magazine="TAW_AMMO_30RND_556x45_MAG";
	// 			count=60;
	// 		};
	// 		// class TAW_AMMO_30RND_556x45_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_30RND_556x45_TRACER_MAG";
	// 		// 	count=50;
	// 		// };
	// 		class TAW_AMMO_120RND_556x45_DRUM
	// 		{
	// 			magazine="TAW_AMMO_120RND_556x45_DRUM";
	// 			count=12;
	// 		};
	// 		// class TAW_AMMO_120RND_556x45_TRACER_DRUM	
	// 		// {
	// 		// 	magazine="TAW_AMMO_120RND_556x45_TRACER_DRUM";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_200RND_556x45_BOX
	// 		{
	// 			magazine="TAW_AMMO_200RND_556x45_BOX";
	// 			count=12;
	// 		};
	// 		// class TAW_AMMO_200RND_556x45_TRACER_BOX
	// 		// {
	// 		// 	magazine="TAW_AMMO_200RND_556x45_TRACER_BOX";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_30RND_65x39_MAG
	// 		{
	// 			magazine="TAW_AMMO_30RND_65x39_MAG";
	// 			count=60;
	// 		};
	// 		// class TAW_AMMO_30RND_65x39_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_30RND_65x39_TRACER_MAG";
	// 		// 	count=50;
	// 		// };
	// 		class TAW_AMMO_100RND_65x39_MAG
	// 		{
	// 			magazine="TAW_AMMO_100RND_65x39_MAG";
	// 			count=12;
	// 		};
	// 		// class TAW_AMMO_100RND_65x39_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_100RND_65x39_TRACER_MAG";
	// 		// 	count=10;
	// 		// };
	// 		class TAW_AMMO_200RND_65x39_BOX
	// 		{
	// 			magazine="TAW_AMMO_200RND_65x39_BOX";
	// 			count=12;
	// 		};
	// 		// class TAW_AMMO_200RND_65x39_TRACER_BOX
	// 		// {
	// 		// 	magazine="TAW_AMMO_200RND_65x39_TRACER_BOX";
	// 		// 	count=10;
	// 		// };
	// 		class TAW_AMMO_30RND_65x39_MSBS_MAG
	// 		{
	// 			magazine="TAW_AMMO_30RND_65x39_MSBS_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_30RND_65x39_TRACER_MSBS_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_30RND_65x39_TRACER_MSBS_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_5RND_762x51_CLIP
	// 		{
	// 			magazine="TAW_AMMO_5RND_762x51_CLIP";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_5RND_762x51_CLIP
	// 		{
	// 			magazine="TAW_AMMO_5RND_762x51_AP_CLIP";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_20RND_762x51_MAG
	// 		{
	// 			magazine="TAW_AMMO_20RND_762x51_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_20RND_762x51_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_20RND_762x51_TRACER_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_100RND_762x51_BOX
	// 		{
	// 			magazine="TAW_AMMO_100RND_762x51_BOX";
	// 			count=12;
	// 		};
	// 		// class TAW_AMMO_100RND_762x51_TRACER_BOX
	// 		// {
	// 		// 	magazine="TAW_AMMO_100RND_762x51_TRACER_BOX";
	// 		// 	count=10;
	// 		// };
	// 		class TAW_AMMO_5RND_762x54_CLIP
	// 		{
	// 			magazine="TAW_AMMO_5RND_762x54_CLIP";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_10RND_762x54_MAG
	// 		{
	// 			magazine="TAW_AMMO_10RND_762x54_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_10RND_762x54_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_10RND_762x54_TRACER_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_100RND_762x54_BOX
	// 		{
	// 			magazine="TAW_AMMO_100RND_762x54_BOX";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_10RND_93x64_MAG
	// 		{
	// 			magazine="TAW_AMMO_10RND_93x64_MAG";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_120RND_93x64_BOX
	// 		{
	// 			magazine="TAW_AMMO_120RND_93x64_BOX";
	// 			count=12;
	// 		};
	// 		class TAW_AMMO_5RND_300_WM_MAG
	// 		{
	// 			magazine="TAW_AMMO_5RND_300_WM_MAG";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_5RND_338_LM_CLIP
	// 		{
	// 			magazine="TAW_AMMO_5RND_338_LM_CLIP";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_10RND_338_LM_MAG
	// 		{
	// 			magazine="TAW_AMMO_10RND_338_LM_MAG";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_20RND_338_LM_MAG
	// 		{
	// 			magazine="TAW_AMMO_20RND_338_LM_MAG";
	// 			count=20;
	// 		};
	// 		class TAW_AMMO_120RND_338_BOX
	// 		{
	// 			magazine="TAW_AMMO_120RND_338_BOX";
	// 			count=12;
	// 		};
	// 		class TAW_AMMO_7RND_408_MAG
	// 		{
	// 			magazine="TAW_AMMO_7RND_408_MAG";
	// 			count=20;
	// 		};	
	// 		class TAW_AMMO_10RND_127x99_MAG	
	// 		{
	// 			magazine="TAW_AMMO_10RND_127x99_MAG";
	// 			count=20;
	// 		};
	// 		// class TAW_AMMO_10RND_127x99_TRACER_MAG
	// 		// {
	// 		// 	magazine="TAW_AMMO_10RND_127x99_TRACER_MAG";
	// 		// 	count=20;
	// 		// };
	// 		class TAW_AMMO_10RND_127x99_API_MAG
	// 		{
	// 			magazine="TAW_AMMO_10RND_127x99_API_MAG";
	// 			count=20;
	// 		};

	// 		//AT Rockets
	// 		class Titan_AA
	// 		{
	// 			magazine="Titan_AA";
	// 			count=15;
	// 		};
	// 		class Titan_AP
	// 		{
	// 			magazine="Titan_AP";
	// 			count=10;
	// 		};
	// 		class Titan_AT
	// 		{
	// 			magazine="Titan_AT";
	// 			count=15;
	// 		};
	// 		class MRAWS_HE_F
	// 		{
	// 			magazine="MRAWS_HE_F";
	// 			count=20;
	// 		};
	// 		class MRAWS_HEAT55_F
	// 		{
	// 			magazine="MRAWS_HEAT55_F";
	// 			count=20;
	// 		};
	// 		class MRAWS_HEAT_F
	// 		{
	// 			magazine="MRAWS_HEAT_F";
	// 			count=20;
	// 		};
	// 		class Vorona_HEAT
	// 		{
	// 			magazine="Vorona_HEAT";
	// 			count=15;
	// 		};
	// 		class Vorona_HE
	// 		{
	// 			magazine="Vorona_HE";
	// 			count=15;
	// 		};
	// 	};
	// };
	// class TAW_Resupply_UtilityCrate: Box_NATO_WpsSpecial_F {
	// 	displayName="Utility Resupply Crate [TAW]";
	// 	class TransportBackpacks {
	// 	};
	// 	class TransportWeapons {
	// 	};
	// 	class TransportItems {
	// 		class TFAR_anprc152
	// 		{
	// 			name="TFAR_anprc152";
	// 			count=20;
	// 		};
	// 		class TFAR_microdagr
	// 		{
	// 			name="TFAR_microdagr";
	// 			count=10;
	// 		};
	// 		class B_UavTerminal
	// 		{
	// 			name="B_UavTerminal";
	// 			count=5;
	// 		};
	// 		class ItemMicroDAGR
	// 		{
	// 			name="ItemMicroDAGR";
	// 			count=5;
	// 		};
	// 		class ItemAndroid
	// 		{
	// 			name="ItemAndroid";
	// 			count=5;
	// 		};
	// 		class ItemcTab
	// 		{
	// 			name="ItemcTab";
	// 			count=5;
	// 		};
	// 		class ACE_NVG_Gen4_Black
	// 		{
	// 			name="ACE_NVG_Gen4_Black";
	// 			count=20;
	// 		};
	// 		class Laserdesignator_03
	// 		{
	// 			name="Laserdesignator_03";
	// 			count=10;
	// 		};
	// 		class ACE_HuntIR_monitor
	// 		{
	// 			name="ACE_HuntIR_monitor";
	// 			count=5;
	// 		};
	// 		class ACE_Fortify
	// 		{
	// 			name="ACE_Fortify";
	// 			count=10;
	// 		};
	// 		class ACE_EntrenchingTool
	// 		{
	// 			name="ACE_EntrenchingTool";
	// 			count=10;
	// 		};
	// 		class ACE_DefusalKit
	// 		{
	// 			name="ACE_DefusalKit";
	// 			count=10;
	// 		};	
	// 		class MineDetector
	// 		{
	// 			name="MineDetector";
	// 			count=5;
	// 		};	
	// 		class ToolKit
	// 		{
	// 			name="ToolKit";
	// 			count=5;
	// 		};	
	// 		class ACE_wirecutter
	// 		{
	// 			name="ACE_wirecutter";
	// 			count=10;
	// 		};	
	// 		class ACE_Tripod
	// 		{
	// 			name="ACE_Tripod";
	// 			count=5;
	// 		};	
	// 		class ACE_MapTools
	// 		{
	// 			name="ACE_MapTools";
	// 			count=10;
	// 		};	
	// 		class ACE_RangeCard
	// 		{
	// 			name="ACE_RangeCard";
	// 			count=10;
	// 		};	
	// 		class ACE_Flashlight_XL50
	// 		{
	// 			name="ACE_Flashlight_XL50";
	// 			count=10;
	// 		};	
	// 		class ItemcTabHCam
	// 		{
	// 			name="ItemcTabHCam";
	// 			count=10;
	// 		};				
	// 		class ACE_IR_Strobe_Item
	// 		{
	// 			name="ACE_IR_Strobe_Item";
	// 			count=20;
	// 		};					
	// 		class ACE_CableTie
	// 		{
	// 			name="ACE_CableTie";
	// 			count=50;
	// 		};					
	// 		class tfw_rf3080Item
	// 		{
	// 			name="tfw_rf3080Item";
	// 			count=5;
	// 		};					
	// 		class ACE_EarPlugs
	// 		{
	// 			name="ACE_EarPlugs";
	// 			count=25;
	// 		};	
	// 		class Laserbatteries
	// 		{
	// 			name="Laserbatteries";
	// 			count=20;
	// 		};
	// 	};
	// 	class TransportMagazines {
	// 	};
	// };	
	// class TAW_Resupply_ExplosiveCrate: Box_NATO_Grenades_F {
	// 	displayName="Explosive Resupply Crate [TAW]";
	// 	class TransportBackpacks {
	// 	};
	// 	class TransportWeapons {
	// 	};
	// 	class TransportItems {
	// 		class ACE_M26_Clacker
	// 		{
	// 			name="ACE_M26_Clacker";
	// 			count=10;
	// 		};
	// 		class ACE_Clacker
	// 		{
	// 			name="ACE_Clacker";
	// 			count=10;
	// 		};			
	// 		class DemoCharge_Remote_Mag
	// 		{
	// 			name="DemoCharge_Remote_Mag";
	// 			count=40;
	// 		};		
	// 		class ATMine_Range_Mag
	// 		{
	// 			name="ATMine_Range_Mag";
	// 			count=25;
	// 		};		
	// 		class AMP_Breaching_Charge_Mag
	// 		{
	// 			name="AMP_Breaching_Charge_Mag";
	// 			count=25;
	// 		};		
	// 		class SatchelCharge_Remote_Mag
	// 		{
	// 			name="SatchelCharge_Remote_Mag";
	// 			count=20;
	// 		};		
	// 		class ClaymoreDirectionalMine_Remote_Mag
	// 		{
	// 			name="SatchelCharge_Remote_Mag";
	// 			count=25;
	// 		};		
	// 		class APERSMineDispenser_Mag
	// 		{
	// 			name="APERSMineDispenser_Mag";
	// 			count=5;
	// 		};			
	// 		class HandGrenade
	// 		{
	// 			name="HandGrenade";
	// 			count=25;
	// 		};
	// 		class SmokeShell
	// 		{
	// 			name="SmokeShell";
	// 			count=25;
	// 		};
	// 		class SmokeShellBlue
	// 		{
	// 			name="SmokeShellBlue";
	// 			count=25;
	// 		};
	// 		class SmokeShellRed
	// 		{
	// 			name="SmokeShellRed";
	// 			count=25;
	// 		};
	// 		class SmokeShellGreen
	// 		{
	// 			name="SmokeShellGreen";
	// 			count=10;
	// 		};
	// 		class SmokeShellPurple
	// 		{
	// 			name="SmokeShellPurple";
	// 			count=10;
	// 		};
	// 		class ACE_M84
	// 		{
	// 			name="ACE_M84";
	// 			count=30;
	// 		};			

	// 	};
	// 	class TransportMagazines {
	// 	};
	// };
	// class TAW_Resupply_MedicalCrate: Box_NATO_Support_F {
	// 	displayName="Medical Resupply Crate [TAW]";
	// 	class TransportBackpacks {
	// 	};
	// 	class TransportWeapons {
	// 	};
	// 	class TransportItems {
	// 		class kat_IV_16
	// 		{
	// 			name="kat_IV_16";
	// 			count=50;
	// 		};
	// 		class ACE_painkillers
	// 		{
	// 			name="ACE_painkillers";
	// 			count=10;
	// 		};
	// 		class kat_X_AED
	// 		{
	// 			name="kat_X_AED";
	// 			count=3;
	// 		};
	// 		class kat_CarbonateItem
	// 		{
	// 			name="kat_CarbonateItem";
	// 			count=10;
	// 		};
	// 		class kat_EACA
	// 		{
	// 			name="kat_EACA";
	// 			count=20;
	// 		};
	// 		class kat_IO_FAST
	// 		{
	// 			name="kat_IO_FAST";
	// 			count=30;
	// 		};
	// 		class ACE_splint
	// 		{
	// 			name="ACE_splint";
	// 			count=30;
	// 		};
	// 		class ACE_tourniquet
	// 		{
	// 			name="ACE_tourniquet";
	// 			count=30;
	// 		};
	// 		class kat_TXA
	// 		{
	// 			name="kat_TXA";
	// 			count=20;
	// 		};
	// 		class ACE_fieldDressing
	// 		{
	// 			name="ACE_fieldDressing";
	// 			count=150;
	// 		};
	// 		class ACE_elasticBandage
	// 		{
	// 			name="ACE_elasticBandage";
	// 			count=150;
	// 		};
	// 		class ACE_packingBandage
	// 		{
	// 			name="ACE_packingBandage";
	// 			count=150;
	// 		};
	// 		class ACE_quikclot
	// 		{
	// 			name="ACE_quikclot";
	// 			count=150;
	// 		};	
	// 		class ACE_bloodIV
	// 		{
	// 			name="ACE_bloodIV";
	// 			count=20;
	// 		};
	// 		class ACE_bloodIV_500
	// 		{
	// 			name="ACE_bloodIV_500";
	// 			count=15;
	// 		};
	// 		class ACE_bloodIV_250
	// 		{
	// 			name="ACE_bloodIV_250";
	// 			count=15;
	// 		};		
	// 		class ACE_salineIV
	// 		{
	// 			name="ACE_salineIV";
	// 			count=20;
	// 		};
	// 		class ACE_salineIV_500
	// 		{
	// 			name="ACE_salineIV_500";
	// 			count=15;
	// 		};
	// 		class ACE_salineIV_250
	// 		{
	// 			name="ACE_salineIV_250";
	// 			count=15;
	// 		};
	// 		class ACE_plasmaIV
	// 		{
	// 			name="ACE_plasmaIV";
	// 			count=20;
	// 		};
	// 		class ACE_plasmaIV_500
	// 		{
	// 			name="ACE_plasmaIV_500";
	// 			count=15;
	// 		};
	// 		class ACE_plasmaIV_250
	// 		{
	// 			name="ACE_plasmaIV_250";
	// 			count=15;
	// 		};
	// 		class ACE_personalAidKit
	// 		{
	// 			name="ACE_personalAidKit";
	// 			count=20;
	// 		};
	// 		class ACE_surgicalKit
	// 		{
	// 			name="ACE_surgicalKit";
	// 			count=5;
	// 		};
	// 	};
	// 	class TransportMagazines {
	// 	};
	// };
};