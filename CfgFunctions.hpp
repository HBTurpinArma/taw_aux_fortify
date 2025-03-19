class CfgFunctions {
	class TAW {
		tag = "TAW";
		class FORTIFY {
			file="TAW_AUX_FORTIFY\Functions";
			class fortify_settingsInit{postInit=1;};
			class fortify_deployHandler{postInit=1;};
			class fob_isNearby {};
			class fob_find {};
		};

		class SUPPLIES {
			file="TAW_AUX_FORTIFY\Functions";
			class supplies_find{};
			class supplies_isNearby{};
			class supplies_collectNearby{};
			class supplies_monitor{postInit=1;};
		};

		class RESUPPLY {
			file="TAW_AUX_FORTIFY\Functions";
			class resupply_init{};
		};

		class VEHICLE_TERMINAL {
			file="TAW_AUX_FORTIFY\Functions";
			class terminal_settingsInit{postInit=1;};
			class terminal_findSpawnLocation{};
			class terminal_spawn{};
			class terminal_open{};
			class terminal_init{};
			class terminal_setup{};
			class terminal_vehicleInfo{};
		};
	};
};