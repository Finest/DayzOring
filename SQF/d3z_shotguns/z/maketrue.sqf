
WaitUntil {(player ammo "d3z_lanber") > 0};
d3z_reloading = true;
D3ZNOTSHOT = true;
D3ZSHOTTWO = false;
eh_notshot = player addEventHandler ["fired", "nul = player execVM 'd3z_shotguns\z\shot.sqf'"];
//hint "true";