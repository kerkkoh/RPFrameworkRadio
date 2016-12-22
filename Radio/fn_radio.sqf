/*
Author: Kerkkoh
First Edit: 22.12.2016
*/
params ["_act"];
if (_act == 0) then {
	ctrlShow [1600, false];
	ctrlShow [1601, true];
	_indx = lbCurSel 1500;
	if (_indx == -1) exitWith {};
	_url = lbData [1500, _indx];
	
	(vehicle player) setVariable ["radio", _url, true];
	
	[_url] call NRD_fnc_play;
	
	{
		if (_x != player) then {
			[_url] remoteExecCall ["NRD_fnc_play", _x];
		};
	}forEach crew (vehicle player);
} else {
	ctrlShow [1601, false];
	ctrlShow [1600, true];
	
	[] call NRD_fnc_stop;
	
	(vehicle player) setVariable ["radio", "idle", true];
	
	{
		if (_x != player) then {
			[] remoteExecCall ["NRD_fnc_stop", _x];
		};
	}forEach crew (vehicle player);
};