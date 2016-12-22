/*
Author: Kerkkoh
First Edit: 22.12.2016
*/

_vehicle = vehicle player;
if (_vehicle getVariable ["radio", "nil"] == "nil") then {
	_vehicle setVariable ["radio", "idle", true];
	
	_vehicle addEventHandler ["GetIn", {
		_radio = (_this select 0) getVariable "radio";
		if (_radio != "idle") then {
			[_radio] remoteExecCall ["NRD_fnc_play", (_this select 2)];
		};
	}];
	
	_vehicle addEventHandler ["GetOut", {
		_radio = (_this select 0) getVariable "radio";
		if (_radio != "idle") then {
			[] remoteExecCall ["NRD_fnc_stop", (_this select 2)];
		};
	}];
};

createDialog "radio";

if (_vehicle getVariable "radio" != "idle") then {
	ctrlShow [1600, false];
	ctrlShow [1601, true];
} else {
	ctrlShow [1601, false];
	ctrlShow [1600, true];
};

_slider = (findDisplay 2345) displayCtrl 1900;
_slider sliderSetRange [0, 100];
_slider sliderSetPosition 0;

if (_vehicle getVariable "radio" != "idle") then {
	_song = [] call NRD_fnc_song;
	ctrlSetText [1003, _song];
};

lbClear 1500;

{
	_station = lbAdd [1500, (_x select 0)];
	lbSetData [1500, _station, (_x select 1)];
}forEach RPF_radioStations;

lbSetCurSel [1500, 0];