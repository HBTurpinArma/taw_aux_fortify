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
		side = 3;

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
			class GOM_AircraftLoadout {
				displayName = "Edit Nearby Aircraft Loadouts";
				priority = 49;
				radius = 7;
				position = "interact";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				condition = "true";
				statement = "[player] spawn GOM_fnc_aircraftLoadout";
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
				class GOM_AircraftLoadout {
                    displayName = "Edit Nearby Aircraft Loadouts";
                    distance = 2;
                    exceptions[] = {"isNotInside"};
                    icon = "\z\ace\addons\rearm\ui\icon_rearm_interact.paa";
                    condition = "true";
                    statement = "[_player] spawn GOM_fnc_aircraftLoadout";
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
		icon = "\A3\Misc_F\Helpers\data\ui\icons\Sign_Arrow_Yellow_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Sign_Arrow_Yellow_F.jpg";
		model = "\A3\Misc_F\Helpers\Sign_Arrow_F";
		SLX_XEH_DISABLED = 0;


		class ACE_Actions {
			class ACE_MainActions {
				class Remove_Spawnpoint {
					displayName = "Remove Spawnpoint";
					condition = "";
					statement = "deleteVehicle _this";
					icon = "";
				};
			};
        };

		class UserActions {
			class Remove_Spawnpoint {
				displayName = "Remove Spawnpoint";
				priority = 50;
				radius = 7;
				position = "doplnovani";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				// condition = "player call ace_common_fnc_isEngineer";
				condition = "true";
				statement = "deleteVehicle this";
			};
		};
	};

	class Sign_Arrow_Green_F;
	class TAW_Terminal_Car_Spawn: Sign_Arrow_Green_F {
		displayName = "Ground Vehicle Spawn Point [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		icon = "\A3\Misc_F\Helpers\data\ui\icons\Sign_Arrow_Green_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Sign_Arrow_Green_F.jpg";
		model = "\A3\Misc_F\Helpers\Sign_Arrow_F";
		SLX_XEH_DISABLED = 0;

		class ACE_Actions {
			class ACE_MainActions {
				class Remove_Spawnpoint {
					displayName = "Remove Spawnpoint";
					condition = "";
					statement = "deleteVehicle _this";
					icon = "";
				};
			};
        };

		class UserActions {
			class Remove_Spawnpoint {
				displayName = "Remove Spawnpoint";
				priority = 50;
				radius = 7;
				position = "doplnovani";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				// condition = "player call ace_common_fnc_isEngineer";
				condition = "true";
				statement = "deleteVehicle this";
			};
		};
	};

	class Sign_Arrow_Cyan_F;
	class TAW_Terminal_Boat_Spawn: Sign_Arrow_Cyan_F {
		displayName = "Boat Spawn Point [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		icon = "\A3\Misc_F\Helpers\data\ui\icons\Sign_Arrow_Cyan_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Sign_Arrow_Cyan_F.jpg";
		model = "\A3\Misc_F\Helpers\Sign_Arrow_F";
		SLX_XEH_DISABLED = 0;


		class ACE_Actions {
			class ACE_MainActions {
				class Remove_Spawnpoint {
					displayName = "Remove Spawnpoint";
					condition = "";
					statement = "deleteVehicle _this";
					icon = "";
				};
			};
        };

		class UserActions {
			class Remove_Spawnpoint {
				displayName = "Remove Spawnpoint";
				priority = 50;
				radius = 7;
				position = "doplnovani";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				// condition = "player call ace_common_fnc_isEngineer";
				condition = "true";
				statement = "deleteVehicle this";
			};
		};
	};

	class Sign_Arrow_Blue_F;
	class TAW_Resupply_Spawn: Sign_Arrow_Blue_F {
		displayName = "Resupply Spawn Point [TAW]";
		scope = 2;
		scopeCurator = 2;
		side = 3;
		icon = "\A3\Misc_F\Helpers\data\ui\icons\Sign_Arrow_Blue_F";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Sign_Arrow_Blue_F.jpg";
		model = "\A3\Misc_F\Helpers\Sign_Arrow_F";
		SLX_XEH_DISABLED = 0;

		class ACE_Actions {
			class ACE_MainActions {
				class Remove_Spawnpoint {
					displayName = "Remove Spawnpoint";
					condition = "";
					statement = "deleteVehicle _this";
					icon = "";
				};
			};
        };

		class UserActions {
			class Remove_Spawnpoint {
				displayName = "Remove Spawnpoint";
				priority = 50;
				radius = 7;
				position = "doplnovani";
				showWindow = 0;
				hideOnUse = 1;
				onlyForPlayer = 0;
				shortcut = "";
				// condition = "player call ace_common_fnc_isEngineer";
				condition = "true";
				statement = "deleteVehicle this";
			};
		};
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
			init = "[(_this select 0), true] call TAW_fnc_resupply_init";
		};
	};

	//Taru version
	// class Land_Pod_Heli_Transport_04_box_F;
	// class Land_Pod_Heli_Transport_04_resupply_F: Land_Pod_Heli_Transport_04_box_F {
	// 	//Event Handlers
	// 	class EventHandlers {
	// 		init = "[(_this select 0), true] call TAW_fnc_resupply_init";
	// 	};
	// };

	class TAW_Full_ACEArsenal: B_supplyCrate_F {
		displayName="Arsenal Crate [TAW]";
		hiddenSelectionsTextures[] = {"\TAW_AUX_FORTIFY\Data\Textures\supplydrop_taw_co.paa"};

		//Ace Cargo Size
  		ace_cargo_size = 10;  
        ace_cargo_canLoad = 0; 
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
			init = "[(_this select 0), false] call TAW_fnc_resupply_init";
		};
	};
};