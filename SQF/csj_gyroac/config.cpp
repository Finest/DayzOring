// config.bin - 18:36:34 01/03/13, generated in 0.14 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

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

class CfgVehicleClasses {
	class CSJaddonsAIRClass {
		displayName = "CSJ Air";
	};
};

class CfgPatches {
	class CSJ_GyroAC {
		units[] = {"CSJ_GyroP", "CSJ_GyroPboat", "CSJ_GyroFloat", "CSJ_FloatWash", "CSJ_GyroC", "CSJ_GyroCfloat", "CSJ_Cfloat", "CSJ_GyroCover"};
		weapons[] = {};
	};
};

class CfgSkeletons {
	class Plane;	// External class reference
	
	class CSJ_GyroACBones : Plane {
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {"door", "", "rightwindow", "", "leva smerovka", "", "ngear", "", "gear", "", "wheels", "", "frontwheel", "", "pkd klapka", "", "lkd klapka", "", "pkh klapka", "", "lkh klapka", "", "leva vejskovka", "", "prava vejskovka", "", "ls klapka", "", "ps klapka", "", "vrtule 1", "", "vrtule 0", "", "alt", "", "alt2", "", "nm_alt", "", "nm_alt2", "", "ukaz_rychlo", "", "throttle", "", "vert_speed", "", "vert_speed2", "", "rpm", "", "rpm2", "", "horizont_dive", "", "horizont", "horizont_dive", "horizont2_dive", "", "horizont2", "horizont2_dive", "kompas", "", "kompas2", "", "hodinova", "", "hodinova2", "", "minutova", "", "minutova2", "", "damageHide", "", "rampfront", "", "ramprear", "", "ramphydro", ""};
	};
	class Helicopter;	// External class reference
	
	class CSJ_GyroCBones : Helicopter {
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {"alt", "", "alt2", "", "nm_alt", "", "nm_alt2", "", "ukaz_rychlo", "", "throttle", "", "vert_speed", "", "vert_speed2", "", "rpm", "", "rpm2", "", "horizont_dive", "", "horizont", "horizont_dive", "horizont2_dive", "", "horizont2", "horizont2_dive", "kompas", "", "kompas2", "", "hodinova", "", "hodinova2", "", "minutova", "", "minutova2", "", "damageHide", "", "pilotdoor", "", "copilotdoor", "", "velka vrtule", "", "mala vrtule", ""};
	};
};

class cfgModels {
	class Plane;	// External class reference
	
	class CSJ_GyroP : Plane {
		skeletonName = "CSJ_GyroACBones";
		sectionsInherit = "";
		sections[] = {"vrtule staticka", "vrtule blur", "wheelstatic"};
		
		class Animations {
			class RightProp {
				type = "rotation";
				source = "rotor";
				selection = "vrtule 0";
				axis = "osa vrtule 0";
				angle0 = 0;
				angle1 = 2 * 3.1415;
			};
			
			class LeftProp {
				type = "rotation";
				source = "rotor";
				selection = "vrtule 1";
				axis = "osa vrtule 1";
				angle0 = 0;
				angle1 = 2 * 3.1415;
			};
			
			class rotate_Wheels {
				type = "rotationX";
				source = "wheel";
				selection = "wheels";
				axis = "";
				memory = 1;
				sourceAddress = "loop";
				minValue = 0;
				maxValue = 1;
				angle0 = 0;
				angle1 = "rad -360";
			};
			
			class rotate_Wheelsfront {
				type = "rotationX";
				source = "wheel";
				selection = "frontwheel";
				axis = "";
				memory = 1;
				sourceAddress = "loop";
				minValue = 0;
				maxValue = 1;
				angle0 = 0;
				angle1 = "rad -360";
			};
			
			class Rudder {
				type = "rotation";
				source = "rudder";
				selection = "leva smerovka";
				axis = "osa leve smerovky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad 25";
				angle1 = "rad -25";
			};
			
			class ElevRight {
				type = "rotation";
				source = "elevator";
				selection = "prava vejskovka";
				axis = "osa prave vejskovky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad 35";
				angle1 = "rad -35";
			};
			
			class ElevLeft {
				type = "rotation";
				source = "elevator";
				selection = "leva vejskovka";
				axis = "osa leve vejskovky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad 35";
				angle1 = "rad -35";
			};
			
			class aileronBleft {
				type = "rotation";
				source = "aileron";
				selection = "lkd klapka";
				axis = "osa lk klapky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad -75";
				angle1 = "rad 75";
			};
			
			class aileronBRight {
				type = "rotation";
				source = "aileron";
				selection = "pkd klapka";
				axis = "osa pk klapky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad 75";
				angle1 = "rad -75";
			};
			
			class aileronTleft {
				type = "rotation";
				source = "aileron";
				selection = "lkh klapka";
				axis = "osa lk klapky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad -75";
				angle1 = "rad 75";
			};
			
			class aileronTRight {
				type = "rotation";
				source = "aileron";
				selection = "pkh klapka";
				axis = "osa pk klapky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad 75";
				angle1 = "rad -75";
			};
			
			class FlapsRight {
				type = "rotation";
				source = "flap";
				selection = "ps klapka";
				axis = "osa ps klapky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = 0;
				maxValue = 1;
				angle0 = "0";
				angle1 = "rad -55";
			};
			
			class FlapsLeft {
				type = "rotation";
				source = "flap";
				selection = "ls klapka";
				axis = "osa ls klapky";
				memory = 1;
				sourceAddress = "clamp";
				minValue = 0;
				maxValue = 1;
				angle0 = "0";
				angle1 = "rad 55";
			};
			
			class Sticka {
				type = "rotation";
				source = "elevator";
				selection = "sticka";
				axis = "osa sticka";
				memory = 1;
				sourceAddress = "clamp";
				minValue = -1;
				maxValue = 1;
				angle0 = "rad 15";
				angle1 = "rad -15";
			};
			
			class WatchHour {
				type = "rotation";
				source = "clockHour";
				selection = "hodinova";
				axis = "osa_time";
				minValue = 0;
				maxValue = 1;
				angle0 = 0;
				memory = "false";
				angle1 = "rad -360";
			};
			
			class WatchMinute : WatchHour {
				type = "rotation";
				source = "clockMinute";
				selection = "minutova";
				axis = "osa_time";
				minValue = 0;
				maxValue = 1;
				angle0 = 0;
				memory = "false";
				angle1 = "rad -360";
			};
			
			class IndicatorSpeed {
				type = "rotation";
				source = "speed";
				selection = "ukaz_rychlo";
				axis = "osa_rychlo";
				memory = "false";
				minValue = 0;
				angle0 = -5;
				maxValue = 135;
				angle1 = "rad -320";
			};
			
			class IndicatorSpeed2 : IndicatorSpeed {
				selection = "throttle";
				axis = "osa_throttle";
				maxValue = 305;
				angle1 = "rad +320";
			};
			
			class IndicatorAltRadar {
				type = "rotation";
				source = "altRadar";
				sourceAddress = "loop";
				selection = "alt";
				axis = "osa_alt";
				memory = 0;
				minValue = 1;
				maxValue = 100;
				angle0 = 0;
				angle1 = "rad -360";
			};
			
			class IndicatorVertSpeed {
				type = "rotation";
				source = "vertSpeed";
				selection = "vert_speed";
				axis = "osa_vert_speed";
				memory = 0;
				minValue = -30.0;
				maxValue = 30.0;
				angle0 = 0;
				angle1 = -6.23599;
			};
			
			class IndicatorRPM {
				type = "rotation";
				source = "rpm";
				selection = "rpm";
				axis = "osa_rpm";
				memory = "false";
				minValue = 0;
				maxValue = 3;
				angle0 = 0;
				angle1 = "rad -360";
			};
			
			class IndicatorCompass {
				type = "rotation";
				source = "direction";
				selection = "kompas";
				axis = "osa_kompas";
				memory = "false";
				minValue = -3.14159;
				maxValue = 3.14159;
				angle0 = -3.14159;
				angle1 = 3.14159;
			};
			
			class HorizonBank {
				type = "rotationZ";
				source = "horizonBank";
				selection = "horizont";
				axis = "osa_horizont";
				memory = "false";
				minValue = "rad -360";
				maxValue = "rad +360";
				angle0 = "rad -360";
				angle1 = "rad +360";
			};
			
			class Horizon2Bank : HorizonBank {
				selection = "horizont2";
				axis = "osa_horizont2";
			};
			
			class HorizonDive {
				type = "rotationX";
				source = "horizonDive";
				selection = "horizont_dive";
				axis = "osa_horizont";
				memory = 0;
				minValue = "rad -360";
				maxValue = "rad +360";
				angle0 = "rad -360";
				angle1 = "rad +360";
			};
		};
	};
	
	class CSJ_GyroPboat : CSJ_GyroP {};
	
	class CSJ_GyroCover : CSJ_GyroP {};
	class Helicopter;	// External class reference
	
	class CSJ_GyroC : Helicopter {
		skeletonName = "CSJ_GyroCBones";
		sectionsInherit = "";
		sections[] = {"velka vrtule blur", "velka vrtule staticka", "velka vrtule", "mala vrtule blur", "mala vrtule", "mala vrtule staticka"};
		
		class Animations {
			class HRotor {
				type = "rotation";
				source = "rotorH";
				selection = "velka vrtule";
				axis = "velka osa";
				angle0 = 0;
				angle1 = -2 * 3.1415;
			};
			
			class VRotor {
				type = "rotation";
				source = "rotorV";
				selection = "mala vrtule";
				axis = "mala osa";
				angle0 = 0;
				angle1 = 2 * 3.1415;
			};
		};
	};
	
	class CSJ_GyroCfloat : CSJ_GyroC {};
};

class CfgVehicles {
	class All {};
	
	class AllVehicles : All {};
	
	class Air : AllVehicles {
		class ViewPilot;	// External class reference
	};
	
	class Plane : Air {
		class AnimationSources;	// External class reference
	};
	
	class CSJ_GyroP : Plane {
		scope = public;
		side = TCivilian;
		cabinOpening = 0;
		driverAction = "UH60_Pilot";
		vehicleClass = "CSJaddonsAIRClass";
		model = "\CSJ_GyroAC\CSJ_GyroP";
		displayName = "AutoGyro";
		getInAction = "GetInMed";
		transportSoldier = 0;
		picture = "\CSJ_GyroAC\T\gyropic.paa";
		Icon = "\CSJ_GyroAC\T\gyroIcon.paa";
		gearRetracting = false;
		nameSound = "plane";
		mapSize = 8;
		fov = 0.5;
		soundEngine[] = {"\CSJ_GyroAC\camel1.wss", 5.62341, 1.5};
		soundEnviron[] = {"\ca\air\Data\Sound\noise", 0.1, 1.0};
		soundServo[] = {"Vehicles\gun_elevate", db-40, 0.4};
		insideSoundCoef = 0.9;
		airBrake = 0;
		flaps = 0;
		wheelSteeringSensitivity = 0.25;
		nightVision = false;
		preferRoads = false;
		showWeaponCargo = 0;
		camouflage = 8;	// how dificult to spot - bigger - better spotable
		audible = 5;	// audible - bigger - better heard
		driverCanSee = 2+8;
		maxSpeed = 150;	// max speed on level road, km/h
		landingSpeed = 80;
		landingAoa = 5.0*3.1415/180;
		armor = 20;
		ejectSpeed[] = {0, 0, 0};
		ejectDamageLimit = 0.8;
		cost = 1000;
		formationX = 8;
		formationZ = 8;
		castCargoShadow = false;
		castCommanderShadow = 0;
		castDriverShadow = true;
		castGunnerShadow = false;
		hideWeaponsDriver = true;
		hideWeaponsCargo = true;
		transportMaxMagazines = 10;
		transportMaxWeapons = 3;
		transportMaxBackpacks = 1;
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0, 0, 0};

		aileronSensitivity = 0.1;	// relative aileron sensitivity
		elevatorSensitivity = 0.12;	// relative elevator sensitivity
		noseDownCoef = 0;	// how much goes nose down during turns
		brakeDistance = 10;	// vehicle movement precision
		dammageHalf[] = {};
		dammageFull[] = {};
		extCameraPosition[] = {0, 0, -5};
		
		class Library {
			libTextDesc = "Auto_Gyro (CSJ)";
		};
		
		// internal camera viewing limitations
		class ViewPilot : ViewPilot {
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			initAngleX = 25;
			minAngleX = -65;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -155;
			maxAngleY = 155;
		};
		
		class AnimationSources : AnimationSources {};
		
		class HitPoints 
		{
				class HitHull // Usual values set
                {
                  armor = 1.7;
                  material = 55; // User value in model needs to be set to same
                  name = "hull";
                  visual = "";
                  passThrough = 1; // Destroying this Hit area will destroy the object
                };

                class HitEngine // Usual values set
                {
                  armor = 1.2;
                  material = 60; // User value in model needs to be set to same
                  name = "engine";
                  visual = "";
                  passThrough = 1; // Destroying this Hit area will destroy the object
                };
                
                class HitHRotor // Usual values set
                {
                  armor = 0.7;
                  material = 51; // User value in model needs to be set to same
                  name = "mainRotor";
                  visual = "";
                  passThrough = 1; // Destroying this Hit area will destroy the object
                };
                
                class HitFuel // Usual values set
                {
                  armor = 0.3;
                  material = 51; // User value in model needs to be set to same
                  name = "fuel";
                  visual = "fuel";
                  passThrough = 1; // Destroying this Hit area will destroy the object
                };
                
                class HitLFWheel // Usual values set
                {
                  armor = 0.15;
                  material = -1; // No selection darkening is used
                  name = "wheel_1_1_damper";
                  visual = "wheel_1_1";
                  passThrough = 1; // Destroying this Hit area will destroy the object
                };
                
                class HitRFWheel // Usual values set
                {
                  armor = 0.15;
                  material = -1; // No selection darkening is used
                  name = "wheel_1_2_damper";
                  visual = "wheel_1_2";
                  passThrough = 1; // Destroying this Hit area will destroy the object
                };
		};
		
		class Reflectors {};
		weapons[] = {};
		magazines[] = {};
		
		class UserActions {
			class rotateLeft {
				displayName = "rotate aircraft left";
				position = "osa leve smerovky";
				onlyforplayer = 0;
				radius = 2;
				condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
				statement = "this exec ""\CSJ_GyroAC\s\CSJ_rotateGyroLeft.sqs"" ";
			};
			
			class rotateRight {
				displayName = "rotate aircraft right";
				position = "osa leve smerovky";
				onlyforplayer = 0;
				radius = 2;
				condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
				statement = "this exec ""\CSJ_GyroAC\s\CSJ_rotateGyroRight.sqs"" ";
			};
			
			class push {
				displayName = "push aircraft";
				position = "osa leve smerovky";
				onlyforplayer = 0;
				radius = 2;
				condition = "(Count (Crew this)==0) and ((getpos this select 2) <1) and (!isengineon this)";
				statement = "this exec ""\CSJ_GyroAC\s\CSJ_moveGyro.sqs"" ";
			};
		};
		
		class EventHandlers {};
	};
	
	class CSJ_GyroPboat : CSJ_GyroP {
		hiddenSelections[] = {"0", "1", "wheelstatic"};
		model = "\CSJ_GyroAC\CSJ_GyroPboat";
		displayName = "AutoGyro Amphibious";
		transportMaxMagazines = 10;
		transportMaxWeapons = 3;
		transportMaxBackpacks = 1;
		
		class Library {
			libTextDesc = "Auto_Gyro  Amphibious(CSJ)";
		};
		damageResistance = 0.0105;
		
		class EventHandlers {
			init = "[_this select 0] exec ""\CSJ_GyroAC\s\CSJ_GyroFloat.sqs"" ";
		};
	};
	
	class CSJ_GyroCover : CSJ_GyroP {
		model = "\CSJ_GyroAC\CSJ_GyroCover";
		displayName = "AutoGyro enclosed";
		
		class Library {
			libTextDesc = "Auto_Gyro  Enclosed(CSJ)";
		};
	};
	
	class Ship : AllVehicles {};
	
	class Boat : Ship {};
	
	class CSJ_Gyrofloat : Boat {
		side = TFriendly;
		scope = protected;
		model = "\CSJ_GyroAC\CSJ_Gyrofloat.p3d";
		displayName = "";
		vehicleClass = "";
		
		class Turrets {};
		hasGunner = false;
		mapSize = 1;
	};
	
	class CSJ_Gyrofloat2 : CSJ_Gyrofloat {
		side = TFriendly;
		scope = protected;
		model = "\CSJ_GyroAC\CSJ_Gyrofloat2.p3d";
	};
	
	class CSJ_floatWash : CSJ_Gyrofloat {
		side = TFriendly;
		scope = protected;
		model = "\CSJ_GyroAC\CSJ_floatwash.p3d";
		displayName = "";
	};
	class Thing;	// External class reference
	class Building;	// External class reference
	class Strategic;	// External class reference
	
	class NonStrategic : Building {
		class DestructionEffects;	// External class reference
	};
	class House;	// External class reference
	
	class CSJ_Cfloat : House {
		side = TFriendly;
		scope = protected;
		model = "\CSJ_GyroAC\CSJ_Cfloat.p3d";
		animated = false;
		displayName = "CSJ_hut 1";
		destrType = "DestructNo";
		vehicleClass = "";
		mapSize = 1;
	};
	
	class Helicopter : Air {
		class AnimationSources;	// External class reference
	};
	
	class UH60MG : Helicopter {};
	
	class UH60 : UH60MG {};
	
	class CSJ_GyroC : UH60 {
		scope = public;
		model = "\CSJ_GyroAC\CSJ_GyroC.p3d";
		displayName = "Mozzie";
		mapSize = 8;
		cabinOpening = 0;
		hiddenSelections[] = {"0", "1", "2", "3", "4", "5"};
		vehicleClass = "CSJaddonsAIRClass";
		picture = "\CSJ_GyroAC\T\MozPic.paa";
		maxSpeed = 120;	// max speed on level road, km/h
		Icon = "\CSJ_GyroAC\T\Cicon.paa";
		nameSound = "chopper";
		side = TCivilian;
		crew = "Civilian";
		accuracy = 0.3;	// accuracy needed to recognize type of this target
		armor = 30;
		damageResistance = 0.003;
		cost = 100000;
		mainRotorSpeed = 1;
		backRotorSpeed = 1;
		transportSoldier = 0;
		cargoAction[] = {};
		transportAmmo = 0;
		supplyRadius = 2.5;
		initCargoAngleY = 10;
		minCargoAngleY = -60;
		maxCargoAngleY = 120;
		type = "VAir";
		fov = 0.5;
		driverAction = "UH60_Pilot";
		hasGunner = false;
		insideSoundCoef = 0.9;
		formationX = 8;
		formationZ = 8;
		
		// threat (VSoft, VArmor, VAir), how threatening vehicle is to unit types
		threat[] = {0, 0, 0};

		extCameraPosition[] = {0, 0, -5};
		soundGetIn[] = {"", 0.1, 1};
		soundGetOut[] = {"", 0.1, 1};
		soundEngine[] = {"\CSJ_GyroAC\UH1_v1.wss", db28, 1.3};
		typicalCargo[] = {};
		weapons[] = {};
		magazines[] = {};
		transportMaxMagazines = 10;
		transportMaxWeapons = 3;
		transportMaxBackpacks = 1;
		forceHideDriver = true;
		castDriverShadow = true;
		
		// internal camera viewing limitations
		class ViewPilot : ViewPilot {
			initFov = 1;
			minFov = 0.3;
			maxFov = 1.2;
			initAngleX = 35;
			minAngleX = -45;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -155;
			maxAngleY = 155;
		};
		
		class Library {
			libTextDesc = "CSJ_Mozzie";
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		
		class Reflectors {};
		
		class AnimationSources : AnimationSources {};
		
		class UserActions {};
		
		class EventHandlers {};
	};
	
	class CSJ_GyroCfloat : CSJ_GyroC {
		scope = public;
		model = "\CSJ_GyroAC\CSJ_GyroCfloat.p3d";
		displayName = "Mozzie float";
		transportMaxMagazines = 10;
		transportMaxWeapons = 3;
		transportMaxBackpacks = 1;
		
		class EventHandlers {
			init = "[_this select 0] exec ""\CSJ_GyroAC\s\CSJ_GyroCFloat.sqs"" ";
		};
	};
};
