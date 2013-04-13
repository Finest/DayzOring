d3z_pellets = {

	private ["_p", "_a", "_vel", "_vels", "_pos", "_pos1", "_vdir", "_vup", "_z", "_s", "_fac", "_xvel", "_yvel", "_zvel", "_f", "_r"];

	_u = _this select 0;
	if (!local _u) exitWIth {};

	_a = _this select 4;
	_p = _this select 5;
	_f = 13;
	_r = 5;
	if (_a isKindOf "d3z_shot_light") then 
	{
		
		_vdir = vectorDir _p;
		_vup = vectorUp _p;
		_pos1 = [0,0,50];
		_pos = getpos _p;
		_vel = velocity _p;
		//hint format["%1", _vel];
		_fac = abs(_vel select 0) atan2 abs(_vel select 1);
		_xvel = cos _fac;
		_yvel = sin _fac;
		
		_zvela = sqrt (abs(_vel select 0)^2 + abs(_vel select 1)^2);
		_zvelb = _zvela atan2 abs(_vel select 2);
		_zvel = sin _zvelb;
		for [{_i=0}, {_i<=35}, {_i=_i+1}] do
		{

			if (velocity _p distance [0,0,0] > 50) then 
			{
				_p1 = 0.15 - random 0.3;
				_p2 = 0.15 - random 0.3;
				_p3 = 0.15 - random 0.3;
				_vels = [(_vel select 0) + (_xvel * (_p1 * _f)), (_vel select 1) + (_yvel * (_p2 * _f)), (_vel select 2) + (_zvel * (_p3 * _f))];
				_posa = [(_pos select 0) + _p1, (_pos select 1) + _p2, (_pos select 2) + _p3];
				_s = "d3z_ammo_pel" createVehicle _pos1;
				_s setpos (_posa);
				_s setVectorDirAndUp [_vdir, _vup];
				_s setvelocity (_vels);
			};
		};
		deletevehicle (_p);
	};
	
	if (_a isKindOf "d3z_shot_dim") then 
	{
		
		_vdir = vectorDir _p;
		_vup = vectorUp _p;
		_pos1 = [0,0,50];
		_pos = getpos _p;
		_vel = velocity _p;
		hint format["%1", _vel];
		_fac = abs(_vel select 0) atan2 abs(_vel select 1);
		_xvel = cos _fac;
		_yvel = sin _fac;
		
		_zvela = sqrt (abs(_vel select 0)^2 + abs(_vel select 1)^2);
		_zvelb = _zvela atan2 abs(_vel select 2);
		_zvel = sin _zvelb;
		for [{_i=0}, {_i<=35}, {_i=_i+1}] do
		{

			if (velocity _p distance [0,0,0] > 50) then 
			{
				_p1 = 0.15 - random 0.3;
				_p2 = 0.15 - random 0.3;
				_p3 = 0.15 - random 0.3;
				_vels = [(_vel select 0) + (_xvel * (_p1 * _f)), (_vel select 1) + (_yvel * (_p2 * _f)), (_vel select 2) + (_zvel * (_p3 * _f))];
				_posa = [(_pos select 0) + _p1, (_pos select 1) + _p2, (_pos select 2) + _p3];
				_s = "d3z_ammo_pel" createVehicle _pos1;
				_s setpos (_posa);
				_s setVectorDirAndUp [_vdir, _vup];
				_s setvelocity (_vels);
			};
		};
		deletevehicle (_p);
	};
};