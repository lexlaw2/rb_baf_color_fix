class CfgPatches
{
	class rb_baf_color_fix_test
	{
		units[] = {"UK3CB_CCM_I_LR_M2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]={"UK3CB_Factions_CCM_I"};
		version = "1";
		projectName = "https://github.com/lexlaw2/rb_baf_color_fix";
		author = "lexlaw2@ya.ru";
	};
};
class CfgVehicles{
	class Car;
	class Car_F:Car{
		class EventHandlers;
	};
	class UK3CB_LandRover_Base: Car_F{
		class EventHandlers:EventHandlers{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
	};
};
