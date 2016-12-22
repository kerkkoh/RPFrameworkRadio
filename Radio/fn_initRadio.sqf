/*
Author: Kerkkoh
First Edit: 22.12.2016
*/

[] call ClientModules_fnc_initRadioMenu;

RPF_radioStations = [
    ["PD Classical", "http://relay.publicdomainproject.org/classical.mp3"],
    ["PD Jazz", "http://relay.publicdomainproject.org/jazz_swing.mp3"]
];

player addEventHandler ["killed", {
	[] call NRD_fnc_stop;
}];
