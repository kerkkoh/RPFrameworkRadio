/*
Author: Kerkkoh
First Edit: 22.12.2016
*/
_vol = sliderPosition 1900;

[_vol] call NRD_fnc_volume;

{
	if (_x != player) then {
		[_vol] remoteExecCall ["NRD_fnc_volume", _x];
	};
}forEach crew (vehicle player);
