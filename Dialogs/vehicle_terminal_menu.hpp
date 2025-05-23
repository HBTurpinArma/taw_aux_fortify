#include "Dialogs/vehicle_terminal_resources.hpp"

class VVS_Menu
{
	idd = VVS_Menu_IDD;
	name = "VVS_Menu";
	movingEnabled = false;
	enableSimulation = true;
	onLoad = "[] spawn TAW_fnc_terminal_init;";
	
	class controlsBackground
	{
		class titleBackground : VVS_RscText
		{
			idc = -1;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		
		class MainBackground : VVS_RscText
		{
			idc = -1;
			colorBackground[] = {0,0,0,0.76};
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (22 / 250);
		};
		
		// class Footer : VVS_RscText
		// {
		// 	idc = -1;
		// 	colorBackground[] = {0,0,0,0.8};
		// 	x = 0.1;
		// 	y = 0.805;
		// 	w = 0.8;
		// 	h = (1 / 25);
		// };
		
		class Title : VVS_RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Vehicle Terminal";
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};

		// class Budget : VVS_RscTitle
		// {
		// 	colorBackground[] = {0, 0, 0, 0};
		// 	idc = VVS_Budget;
		// 	text = "Budget: -";
		// 	x = 0.1;
		// 	y = 0.2;
		// 	w = 0.8;
		// 	h = (1 / 25);
		// 	align = "right";
		// };
	};
	
	class controls
	{
		class vehicleListNew : VVS_RscListNBox
		{
			idc = VVS_VehicleList;
			text = "";
			sizeEx = 0.04;
			columns[] = {0,0.105,0.5,0.8};
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			rowHeight = 0.050;
			x = 0.1; y = 0.26;
			w = 0.8; h = 0.49 (22 / 250);
			colorPicture[] = {1, 1, 1, 1};
			colorPictureSelected[] = {1, 1, 1, 1};
			colorPictureDisabled[] = {1 ,1, 1, 1};
		};
		
		class ButtonClose : VVS_RscButtonMenu 
		{
			idc = -1;
			text = "Close";
			onButtonClick = "closeDialog 0;";
			x = 0.1;
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		
		class ButtonSettings : VVS_RscButtonMenu 
		{
			idc = -1;
			text = "Spawn";
			onButtonClick = "[] spawn TAW_fnc_terminal_spawn;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.8 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};
