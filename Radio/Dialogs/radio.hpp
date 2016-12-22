/* #Cacelu
$[
	1.063,
	["radio",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1800,"",[1,"",["0.385417 * safezoneW + safezoneX","0.346059 * safezoneH + safezoneY","0.240625 * safezoneW","0.318876 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1500,"",[1,"",["0.396875 * safezoneW + safezoneX","0.510995 * safezoneH + safezoneY","0.217708 * safezoneW","0.131949 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1900,"",[1,"",["0.454167 * safezoneW + safezoneX","0.456017 * safezoneH + safezoneY","0.160417 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"",[1,"Play",["0.396875 * safezoneW + safezoneX","0.456017 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"",[1,"Stop",["0.396875 * safezoneW + safezoneX","0.456017 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"",[1,"Status:",["0.396875 * safezoneW + safezoneX","0.357056 * safezoneH + safezoneY","0.0572917 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"",[1,"Status here",["0.454167 * safezoneW + safezoneX","0.357056 * safezoneH + safezoneY","0.160417 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"",[1,"Song:",["0.396875 * safezoneW + safezoneX","0.401039 * safezoneH + safezoneY","0.0572917 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1003,"",[1,"Song here",["0.454167 * safezoneW + safezoneX","0.401039 * safezoneH + safezoneY","0.160417 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/
 
class radio
{
	idd = 2345;
	class controls
	{
		class RscFrame_1800: RscText
		{
			idc = 1800;
			x = 0.385417 * safezoneW + safezoneX;
			y = 0.346059 * safezoneH + safezoneY;
			w = 0.240625 * safezoneW;
			h = 0.318876 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.510995 * safezoneH + safezoneY;
			w = 0.217708 * safezoneW;
			h = 0.131949 * safezoneH;
		};
		class RscSlider_1900: RscSlider
		{
			idc = 1900;
			x = 0.454167 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.160417 * safezoneW;
			h = 0.0329871 * safezoneH;
			onSliderPosChanged = [] call ClientModules_fnc_radioVolume;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Play"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = [0] call ClientModules_fnc_radio;
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "Stop"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0329871 * safezoneH;
			action = [1] call ClientModules_fnc_radio;
		};
		class RscText_1000: RscText
		{
			idc = 1000;
			text = "Radio"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.357056 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = ""; //--- ToDo: Localize;
			x = 0.454167 * safezoneW + safezoneX;
			y = 0.357056 * safezoneH + safezoneY;
			w = 0.160417 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		class RscText_1002: RscText
		{
			idc = 1002;
			text = "Song:"; //--- ToDo: Localize;
			x = 0.396875 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
		class RscText_1003: RscText
		{
			idc = 1003;
			text = ""; //--- ToDo: Localize;
			x = 0.454167 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.160417 * safezoneW;
			h = 0.0329871 * safezoneH;
		};
	};
};
