# rb_baf_color_fix
попытка фиксить нераскрашиваемую технику  
https://community.bistudio.com/wiki/Arma_3_Vehicle_Customization  
Теперь касательно класснеймов техники:  
Пример №1 (Не возможно заменить скин, он всегда один и тот же) UK3CB_TKA_I_LR_Closed  
Пример №2 (Цвет всегда рандомится)  UK3CB_CCM_I_LR_M2  
[configfile >> "CfgVehicles" >> "UK3CB_CCM_I_LR_M2",true] call compile preprocessFileLineNumbers "dumpConfig.sqf"  
[configfile >> "CfgVehicles" >> "C_Offroad_01_F",true] call compile preprocessFileLineNumbers "dumpConfig.sqf"  
init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";  