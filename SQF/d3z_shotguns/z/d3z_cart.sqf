d3z_cart =
{
	private ["_pweap", "_t"];
	_pWeap = primaryWeapon player;
	if (_pWeap == "d3z_lanber" and d3z_reloading) then 
	{
		d3z_reloading = false;
		D3ZAMMOCOUNT = player ammo "d3z_lanber";
		
		if (D3ZAMMOCOUNT == 2) then
		{
			d3z_reloading = true;
		};
		
		if (D3ZAMMOCOUNT == 1 and D3ZNOTSHOT) then
		{
			d3z_reloading = true;
		};
		if (D3ZAMMOCOUNT < 2 and !D3ZNOTSHOT) then
		{
			if (D3ZSHOTTWO) then {_t = 1} else {_t = 0};
			nul = [_t] execVM "d3z_shotguns\z\ejecting.sqf";
		};
	};
};