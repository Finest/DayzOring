// config.bin - 23:18:33 01/17/13, generated in 0.08 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches {
	class kyo_Bravo_November {
		units[] = {"kyo_Bravo_November", "kyo_Bravo_November_BAF"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAAir", "CA_Anims_Char", "CAData", "CACharacters"};
	};
};
class Turrets;	// External class reference
class MainTurret;	// External class reference

class CfgVehicles {
	class Helicopter;	// External class reference
	
	class kyo_Bravo_November : Helicopter {
		displayName = "Ch-47 Oring";
		side = TWest;
		scope = 2;
		picture = "\kyo_Bravo_November\Ch47\Textura\ch47_ico_ca.paa";
		Icon = "\kyo_Bravo_November\Ch47\Textura\icomap_ch47.paa";
		vehicleClass = "Air";
		simulation = "helicopter";
		model = "\kyo_Bravo_November\Bravo_November.p3d";
		maxSpeed = 190;	// max speed on level road, km/h
		accuracy = 9;	// accuracy needed to recognize type of this target
		armor = 40;
		enableManualFire = 0;
		rotorBig = "vrtule_uh_v";
		rotorBigBlend = "vrtule_uh_v_bl";
		rotorSmall = "vrtule_uh_m";
		rotorSmallBlend = "vrtule_uh_m_bl";
		transportSoldier = 10;
		hasGunner = false;
		driverAction = "UH60_Pilot";
		soundEngine[] = {"\kyo_Bravo_November\Ch47\Sound\ch47engine", 1, 0};
		cargoAction[] = {"UH60_Cargo02", "UH60_Cargo02"};
		nameSound = "chopper";
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		minMainRotorDive = -9;
		maxMainRotorDive = 15;
		neutralMainRotorDive = -5;
		minBackRotorDive = -15;
		maxBackRotorDive = 9;
		neutralBackRotorDive = -5;
		selectionHRotorStill = "velka vrtule staticka";
		selectionHRotorMove = "velka vrtule blur";
		selectionVRotorStill = "mala vrtule staticka";
		selectionVRotorMove = "mala vrtule blur";
		gearRetracting = false;
		transportVehiclesMass = 0;
		transportMaxWeapons = 20;
		transportMaxMagazines = 60;
		weapons[] = {};
		magazines[] = {};
		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerName = "Co-Pilot";
				weapons[] = {};
				magazines[] = {};
			};
		};
		
		class Library {
			libTextDesc = "Ch-47 Oring";
		};
		
		class HitLGlass {
			armor = 1.7;
			material = -1;
			name = "sklo predni L";
			visual = "sklo predni L";
			passThrough = false;
		};
		
		class HitRGlass {
			armor = 1.7;
			material = 1;
			name = "sklo predni P";
			visual = "sklo predni P";
			passThrough = false;
		};
		dammageHalf[] = {"\kyo_Bravo_November\Ch47\textura\Transp.paa", "\kyo_Bravo_November\Ch47\textura\Transp_roto1.paa"};
		dammageFull[] = {"\kyo_Bravo_November\Ch47\textura\Transp.paa", "\kyo_Bravo_November\Ch47\textura\Transp_roto2.paa"};
		
		class Damage {
			tex[] = {};
			mat[] = {"kyo_Bravo_November\Ch47\textura\ch47_body.rvmat", "kyo_Bravo_November\Ch47\textura\ch47_body.rvmat", "kyo_Bravo_November\Ch47\textura\ch47_body_destru1_rv.rvmat", "kyo_Bravo_November\Ch47\textura\panelinte.rvmat", "kyo_Bravo_November\Ch47\textura\panelinte.rvmat", "kyo_Bravo_November\Ch47\textura\ch47_body_destru1_rv.rvmat", "kyo_Bravo_November\Ch47\textura\cargo.rvmat", "kyo_Bravo_November\Ch47\textura\cargo.rvmat", "kyo_Bravo_November\Ch47\textura\ch47_body_destru1_rv.rvmat", "kyo_Bravo_November\Ch47\textura\asientos.rvmat", "kyo_Bravo_November\Ch47\textura\asientos.rvmat", "kyo_Bravo_November\Ch47\textura\ch47_body_destru1_rv.rvmat", "kyo_Bravo_November\Ch47\textura\asientos.rvmat", "kyo_Bravo_November\Ch47\textura\asientos.rvmat", "kyo_Bravo_November\Ch47\textura\ch47_body_destru1_rv.rvmat"};
		};
		
		class AnimationSources {
			class Ani_Ramp {
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		
		class UserActions {
			class LAOpenRear {
				displayName = "Lower Ramp";
				position = "pos pilot";
				radius = 10;
				condition = "(this animationPhase ""Ani_Ramp"" < 0.5)&& (alive this)";
				statement = "this animate[""Ani_Ramp"",1]";
				onlyforplayer = 1;
				priority = 4.7;
				showWindow = 1;
			};
			
			class CloseRear {
				displayName = "Raise Ramp";
				position = "pos pilot";
				radius = 10;
				condition = "(this animationPhase ""Ani_Ramp"" > 0.5)&& (alive this)";
				statement = "this animate[""Ani_Ramp"",0]";
				onlyforplayer = 1;
				priority = 4.7;
				showWindow = 1;
			};
		};
		ACE_SYS_EJECT_EJECT = 0;
		ACE_SYS_EJECT_JUMP = 1;
	};
	class Civilian;	// External class reference
	
	class ht_rope : Civilian {
		model = "\kyo_Bravo_November\rope\bone.p3d";
		armor = 999999;
	};
	
	class ht_rope_inv : ht_rope {
		model = "\kyo_Bravo_November\Animals\mosquito.p3d";
	};
	/*
	class kyo_Bravo_November_BAF : kyo_Bravo_November {
		faction = "Bis_baf";
		displayName = "Bravo November CH-47";
		crew = "BAF_Pilot_MTP";
		typicalCargo[] = {"BAF_Soldier_MTP", "BAF_ASoldier_MTP", "BAF_Soldier_AR_MTP"};
	};
	*/
};