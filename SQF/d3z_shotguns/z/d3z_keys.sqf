if (!local player) exitWIth {};
nul = [] execVM "d3z_shotguns\z\maketrue.sqf";
call compile preprocessFile "d3z_shotguns\z\d3z_cart.sqf";
disableSerialization;
waitUntil {!isNull (findDisplay 46)};
(findDisplay 46) displayAddEventHandler ["Keydown",
"
	_key = _this select 1;
	if (_key in (actionKeys 'ReloadMagazine')) then
	{
		      _this call d3z_cart;
	};
"];