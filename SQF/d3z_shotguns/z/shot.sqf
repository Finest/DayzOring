D3ZNOTSHOT = false;
player removeeventHandler ["fired", eh_notshot];
eh_shottwo = player addeventhandler ["fired", "nul = player execVM 'd3z_shotguns\z\shottwo.sqf'"];