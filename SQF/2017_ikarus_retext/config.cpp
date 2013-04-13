#define private		0
#define protected		1
#define public		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define true	1
#define false	0

class CfgPatches
{
	class oring_BUS
	{
		units[]=
		{
			"Oring_Ikarus"
		};
		weapons[]={};
		requiredVersion=0.100000;
		requiredAddons[]=
		{
			"CAWheeled2"
		};
	};
};
class CfgAddons
{
	class oring_BUS
	{
		list[]=
		{
			"oring_BUS"
		};
	};
};
class CfgVehicleClasses
{
	class CJ187_BW_Wheeled
	{
		displayName="oring - Vehicles";
	};
};
class CfgVehicles
{
	class Ikarus;
	class Oring_Ikarus: Ikarus
	{
		scope=2;
		displayName="Oring Bus";
		vehicleClass="CJ187_BW_Wheeled";
		model="\2017_ikarus_retext\Ikarus";
		Icon="\2017_ikarus_retext\icon\icon_BUS_bw_ca.paa";
		side=1;
		faction="BIS_Ger";
		crew="Functionary1_EP1";
		rarityUrban = 0.600000;
		typicalCargo[]= {};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[]=
		{"2017_ikarus_retext\data\bus_exterior_co.paa"};
	};
};
