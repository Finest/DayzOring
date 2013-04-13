private ["_n", "_t", "_pos", "_c1", "_c2", "_dir", "_vel1", "_vel2"];

_n = 2 - D3ZAMMOCOUNT;
_t = _this select 0;
_dir = player weaponDirection "d3z_lanber";
_vel1 = -(_dir select 0)*1.5;
_vel2 = -(_dir select 1)*1.5;
_pos = [0,0,50];
if (_n == 1) then
{
	sleep 0.5;
	_c1 = "d3z_cart" createvehiclelocal _pos;
	_c1 attachto [player,[-0.02,0.033,0.07], "righthand"];
	sleep 0.05;
	detach _c1;
	_c1 setvectorup _dir;
	_c1 setvelocity [_vel1,_vel2,2];
	player removeEventHandler ["fired", eh_shottwo];
};

if (_n == 2) then
{
	sleep 0.5;
	_c1 = "d3z_cart" createvehiclelocal _pos;
	_c1 attachto [player, [-0.02,0.033,0.07], "righthand"];
	sleep 0.02;
	detach _c1;
	_c1 setvectorup _dir;
	_c1 setvelocity [_vel1,_vel2,2];
	sleep 0.07;
};

if (_t == 1) then
{
	_c2 = "d3z_cart" createvehiclelocal _pos;
	_c2 attachto [player, [-0.02,0.033,0.04], "righthand"];
	sleep 0.02;
	detach _c2;
	_c2 setvectorup _dir;
	_c2 setvelocity [_vel1,_vel2,2];
	sleep 0.5;
};

waitUntil {(player ammo "d3z_lanber") <= 1};
d3z_reloading = true;
D3ZNOTSHOT = true;
D3ZSHOTTWO = false;
eh_notshot = player addEventHandler ["fired", "nul = player execVM 'd3z_shotguns\z\shot.sqf'"];
sleep 60;

deletevehicle _c1;
deletevehicle _c2;


//hint "true";