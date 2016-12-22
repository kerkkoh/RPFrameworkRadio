/*
Author: Kerkkoh
First Edit: 22.12.2016
*/

_menuItems = [
	[
		["(vehicle player) != player"],
		["Radio", "[] call ClientModules_fnc_openRadio"]
	]
];
{
	RPF_InteractionMenuItems pushBack _x;
}forEach _menuItems;
