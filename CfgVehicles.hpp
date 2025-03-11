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
	//Resupply Crates
	class Box_NATO_Ammo_F;
	class Box_NATO_Support_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_WpsSpecial_F;
	class Box_NATO_Equip_F;

	class TAW_Resupply_AmmoCrate: Box_NATO_Ammo_F {
		displayName="Ammo Resupply Crate [TAW]";
		class TransportBackpacks {
		};
		class TransportWeapons {
		};
		class TransportItems {
		};
		class TransportMagazines {
		};
	};
	class TAW_Resupply_UtilityCrate: Box_NATO_WpsSpecial_F
	{
		displayName="Utility Resupply Crate [TAW]";
		class TransportBackpacks {
		};
		class TransportWeapons {
		};
		class TransportItems {
			class TFAR_anprc152
			{
				name="TFAR_anprc152";
				count=20;
			};
			class TFAR_microdagr
			{
				name="TFAR_microdagr";
				count=10;
			};
			class B_UavTerminal
			{
				name="B_UavTerminal";
				count=5;
			};
			class ItemMicroDAGR
			{
				name="ItemMicroDAGR";
				count=5;
			};
			class ItemAndroid
			{
				name="ItemAndroid";
				count=5;
			};
			class ItemcTab
			{
				name="ItemcTab";
				count=5;
			};
			class ACE_NVG_Gen4_Black
			{
				name="ACE_NVG_Gen4_Black";
				count=20;
			};
			class Laserdesignator_03
			{
				name="Laserdesignator_03";
				count=10;
			};
			class ACE_HuntIR_monitor
			{
				name="ACE_HuntIR_monitor";
				count=5;
			};
			class ACE_Fortify
			{
				name="ACE_Fortify";
				count=10;
			};
			class ACE_EntrenchingTool
			{
				name="ACE_EntrenchingTool";
				count=10;
			};
			class ACE_DefusalKit
			{
				name="ACE_DefusalKit";
				count=10;
			};	
			class MineDetector
			{
				name="MineDetector";
				count=5;
			};	
			class ToolKit
			{
				name="ToolKit";
				count=5;
			};	
			class ACE_wirecutter
			{
				name="ACE_wirecutter";
				count=10;
			};	
			class ACE_Tripod
			{
				name="ACE_Tripod";
				count=5;
			};	
			class ACE_MapTools
			{
				name="ACE_MapTools";
				count=10;
			};	
			class ACE_RangeCard
			{
				name="ACE_RangeCard";
				count=10;
			};	
			class ACE_Flashlight_XL50
			{
				name="ACE_Flashlight_XL50";
				count=10;
			};	
			class ItemcTabHCam
			{
				name="ItemcTabHCam";
				count=10;
			};				
			class ACE_IR_Strobe_Item
			{
				name="ACE_IR_Strobe_Item";
				count=20;
			};					
			class ACE_CableTie
			{
				name="ACE_CableTie";
				count=50;
			};					
			class tfw_rf3080Item
			{
				name="tfw_rf3080Item";
				count=5;
			};					
			class ACE_EarPlugs
			{
				name="ACE_EarPlugs";
				count=25;
			};	
			class Laserbatteries
			{
				name="Laserbatteries";
				count=20;
			};
		};
		class TransportMagazines {
		};
	};	
	class TAW_Resupply_ExplosiveCrate: Box_NATO_Grenades_F {
		displayName="Explosive Resupply Crate [TAW]";
		class TransportBackpacks {
		};
		class TransportWeapons {
		};
		class TransportItems {
			class ACE_M26_Clacker
			{
				name="ACE_M26_Clacker";
				count=10;
			};
			class ACE_Clacker
			{
				name="ACE_Clacker";
				count=10;
			};			
			class DemoCharge_Remote_Mag
			{
				name="DemoCharge_Remote_Mag";
				count=40;
			};		
			class ATMine_Range_Mag
			{
				name="ATMine_Range_Mag";
				count=25;
			};		
			class AMP_Breaching_Charge_Mag
			{
				name="AMP_Breaching_Charge_Mag";
				count=25;
			};		
			class SatchelCharge_Remote_Mag
			{
				name="SatchelCharge_Remote_Mag";
				count=20;
			};		
			class ClaymoreDirectionalMine_Remote_Mag
			{
				name="SatchelCharge_Remote_Mag";
				count=25;
			};		
			class APERSMineDispenser_Mag
			{
				name="APERSMineDispenser_Mag";
				count=5;
			};			
			class HandGrenade
			{
				name="HandGrenade";
				count=25;
			};
			class SmokeShell
			{
				name="SmokeShell";
				count=25;
			};
			class SmokeShellBlue
			{
				name="SmokeShellBlue";
				count=25;
			};
			class SmokeShellRed
			{
				name="SmokeShellRed";
				count=25;
			};
			class SmokeShellGreen
			{
				name="SmokeShellGreen";
				count=10;
			};
			class SmokeShellPurple
			{
				name="SmokeShellPurple";
				count=10;
			};
			class ACE_M84
			{
				name="ACE_M84";
				count=30;
			};			
			class Titan_AA
			{
				name="Titan_AA";
				count=20;
			};
			class Titan_AP
			{
				name="Titan_AP";
				count=10;
			};
			class Titan_AT
			{
				name="Titan_AT";
				count=20;
			};
			class MRAWS_HE_F
			{
				name="MRAWS_HE_F";
				count=10;
			};
			class MRAWS_HEAT55_F
			{
				name="MRAWS_HEAT55_F";
				count=20;
			};
			class MRAWS_HEAT_F
			{
				name="MRAWS_HEAT_F";
				count=20;
			};
		};
		class TransportMagazines {
		};
	};
	class TAW_Resupply_MedicalCrate: Box_NATO_Support_F
	{
		displayName="Medical Resupply Crate [TAW]";
		class TransportBackpacks {
		};
		class TransportWeapons {
		};
		class TransportItems {
			class kat_IV_16
			{
				name="kat_IV_16";
				count=50;
			};
			class ACE_painkillers
			{
				name="ACE_painkillers";
				count=10;
			};
			class kat_X_AED
			{
				name="kat_X_AED";
				count=3;
			};
			class kat_CarbonateItem
			{
				name="kat_CarbonateItem";
				count=10;
			};
			class kat_EACA
			{
				name="kat_EACA";
				count=20;
			};
			class kat_IO_FAST
			{
				name="kat_IO_FAST";
				count=30;
			};
			class ACE_splint
			{
				name="ACE_splint";
				count=30;
			};
			class ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=30;
			};
			class kat_TXA
			{
				name="kat_TXA";
				count=20;
			};
			class ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=150;
			};
			class ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=150;
			};
			class ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=150;
			};
			class ACE_quikclot
			{
				name="ACE_quikclot";
				count=150;
			};	
			class ACE_bloodIV
			{
				name="ACE_bloodIV";
				count=20;
			};
			class ACE_bloodIV_500
			{
				name="ACE_bloodIV_500";
				count=15;
			};
			class ACE_bloodIV_250
			{
				name="ACE_bloodIV_250";
				count=15;
			};		
			class ACE_salineIV
			{
				name="ACE_salineIV";
				count=20;
			};
			class ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=15;
			};
			class ACE_salineIV_250
			{
				name="ACE_salineIV_250";
				count=15;
			};
			class ACE_plasmaIV
			{
				name="ACE_plasmaIV";
				count=20;
			};
			class ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=15;
			};
			class ACE_plasmaIV_250
			{
				name="ACE_plasmaIV_250";
				count=15;
			};
			class ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=20;
			};
			class ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=5;
			};
		};
		class TransportMagazines {
		};
	};
};