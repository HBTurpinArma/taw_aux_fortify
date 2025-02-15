class CfgFunctions {
	class TAW_AUX {
		tag = "TAW_AUX";
		class FORTIFY {
			file="TAW_AUX_FORTIFY\Functions";
			class fortifySettingInit{postInit=1;};
			class fortifyDeployHandler{postInit=1;};
			class fobNearby {};
			class fobSearch {};
		};
	};
};