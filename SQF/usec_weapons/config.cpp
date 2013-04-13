// config.bin - 15:29:26 01/29/13, generated in 0.02 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define private		0
#define protected		1
#define public		2

#define true	1
#define false	0

class CfgPatches {
	class USEC {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgAmmo {
	class Default;	// External class reference
};

class CfgMagazines {
	class Default;	// External class reference
	
	class CA_Magazine : Default {
		scope = protected;
		value = 1;
		displayName = "";
		model = "\ca\weapons\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = false;
		useActionTitle = "";
		reloadAction = "ManActReloadMagazine";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 23;	// max estimated speed km/h
	};
	
	class 30Rnd_556x45_Steyr : CA_Magazine {
		scope = public;
		displayName = "Steyr AUG 30rnd";
		picture = "\usec_weapons\icon\m_30steyr_ca.paa";
		ammo = "B_556x45_Ball";
		count = 30;
		initSpeed = 930;
		tracersEvery = 0;
		descriptionShort = "Steyr 30RND";
	};
	
	class 30Rnd_556x45_SteyrSD : 30Rnd_556x45_Steyr {
		displayName = "Steyr AUG 30rnd SD";
		ammo = "B_556x45_SD";
		initSpeed = 320;
		descriptionShort = "Steyr 30RND SD";
	};
};
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference
class Mode_Burst;	// External class reference

class cfgWeapons {
	class RifleCore;	// External class reference
	class M16_base;	// External class reference
	
	class USEC_STEYR_BASE : M16_base {
		scope = private;
		picture = "\usec_weapons\icon\steyr_a1_picture_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = "Steyr AUG";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\HKMP5.rtm"};
		model = "\usec_weapons\model\usec_steyr_aug_a1.p3d";
		dexterity = 1.8;
		optics = false;
		cursoraim = "Foresight";
		opticsDisablePeripherialVision = false;
		value = 2;
		reloadMagazineSound[] = {"usec_weapons\sound\steyr_reload_1", 0.0562341, 1, 20};
		
		class Single : Mode_SemiAuto {
			begin1[] = {"usec_weapons\sound\steyr_shot_1", 1.77828, 1, 1000};
			begin2[] = {"usec_weapons\sound\steyr_shot_2", 1.77828, 1, 1000};
			begin3[] = {"usec_weapons\sound\steyr_shot_3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.4, "begin2", 0.3, "begin3", 0.3};
			reloadTime = 0.075;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.0008;
			minRange = 2;
			minRangeProbab = 0.4;
			midRange = 250;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		
		class FullAuto : Mode_FullAuto {
			begin1[] = {"usec_weapons\sound\steyr_shot_1", 1.77828, 1, 1000};
			begin2[] = {"usec_weapons\sound\steyr_shot_2", 1.77828, 1, 1000};
			begin3[] = {"usec_weapons\sound\steyr_shot_3", 1.77828, 1, 1000};
			soundBegin[] = {"begin1", 0.4, "begin2", 0.3, "begin3", 0.3};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		magazines[] = {"30Rnd_556x45_Steyr", "30Rnd_556x45_SteyrSD"};
		modes[] = {"Single", "FullAuto"};
	};
	
	class USEC_STEYR_A1 : USEC_STEYR_BASE {
		scope = public;
		displayName = "Steyr AUG A1";
		model = "\usec_weapons\model\usec_steyr_aug_a1.p3d";
	};
	
	class USEC_STEYR_A1_M203 : USEC_STEYR_BASE {
		scope = public;
		displayName = "Steyr AUG A1 M203";
		picture = "\usec_weapons\icon\steyr_a1_m203_picture_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton", "\Ca\weapons\data\Anim\M16GL.rtm"};
		model = "\usec_weapons\model\usec_steyr_aug_a1_m203.p3d";
		muzzles[] = {this, "M203Muzzle"};
		
		class Single : Single {
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};
		
		class FullAuto : FullAuto {
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
	};
	
	class USEC_STEYR_A2 : USEC_STEYR_BASE {
		scope = public;
		displayName = "Steyr AUG A2";
		picture = "\usec_weapons\icon\steyr_a2_picture_ca.paa";
		model = "\usec_weapons\model\usec_steyr_aug_a2.p3d";
		modelOptics = "\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		opticsZoomInit = 0.14;
		opticsZoomMin = 0.035;
		opticsZoomMax = 0.14;
		distanceZoomMin = 400;
		distanceZoomMax = 120;
		
		class Single : Single {
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 500;
			midRangeProbab = 0.9;
			maxRange = 1200;
			maxRangeProbab = 0.2;
			recoilProne = "recoil_single_primary_prone_1outof10";
		};
		
		class FullAuto : FullAuto {
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.9;
			maxRange = 300;
			maxRangeProbab = 0.2;
			recoilProne = "recoil_single_primary_prone_1outof10";
		};
	};
	
	class USEC_STEYR_A2_M203 : USEC_STEYR_A1_M203 {
		scope = public;
		displayName = "Steyr AUG A2 M203";
		picture = "\usec_weapons\icon\steyr_a1_m203_picture_ca.paa";
		model = "\usec_weapons\model\usec_steyr_aug_a2_m203.p3d";
		modelOptics = "\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		opticsFlare = true;
		opticsDisablePeripherialVision = true;
		opticsZoomInit = 0.14;
		opticsZoomMin = 0.035;
		opticsZoomMax = 0.14;
		distanceZoomMin = 400;
		distanceZoomMax = 120;
	};
};

class cfgVehicles {
	class ReammoBox;	// External class reference
	
	class USECWeaponBox : ReammoBox {
		scope = public;
		accuracy = 1000;	// accuracy needed to recognize type of this target
		displayName = "USEC Weapon Box";
		model = "\ca\weapons\AmmoBoxes\USBasicWeapons.p3d";
		
		class TransportMagazines {
			class _xx_30Rnd_556x45_Steyr {
				magazine = "30Rnd_556x45_Steyr";
				count = 60;
			};
			
			class _xx_30Rnd_556x45_SteyrSD {
				magazine = "30Rnd_556x45_SteyrSD";
				count = 60;
			};
			
			class _xx_1Rnd_HE_M203 {
				magazine = "1Rnd_HE_M203";
				count = 60;
			};
			
			class _xx_FlareWhite_M203 {
				magazine = "FlareWhite_M203";
				count = 20;
			};
			
			class _xx_FlareGreen_M203 {
				magazine = "FlareGreen_M203";
				count = 20;
			};
			
			class _xx_FlareRed_M203 {
				magazine = "FlareRed_M203";
				count = 20;
			};
			
			class _xx_FlareYellow_M203 {
				magazine = "FlareYellow_M203";
				count = 20;
			};
			
			class _xx_HandGrenade_West {
				magazine = "HandGrenade_West";
				count = 50;
			};
			
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 20;
			};
			
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 20;
			};
			
			class _xx_SmokeShellYellow {
				magazine = "SmokeShellYellow";
				count = 20;
			};
			
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 50;
			};
			
			class _xx_1Rnd_SmokeRed_M203 {
				magazine = "1Rnd_SmokeRed_M203";
				count = 20;
			};
			
			class _xx_1Rnd_SmokeGreen_M203 {
				magazine = "1Rnd_SmokeGreen_M203";
				count = 20;
			};
			
			class _xx_1Rnd_SmokeYellow_M203 {
				magazine = "1Rnd_SmokeYellow_M203";
				count = 20;
			};
			
			class _xx_1Rnd_Smoke_M203 {
				magazine = "1Rnd_Smoke_M203";
				count = 20;
			};
			
			class _xx_15Rnd_9x19_M9 {
				magazine = "15Rnd_9x19_M9";
				count = 30;
			};
			
			class _xx_15Rnd_9x19_M9SD {
				magazine = "15Rnd_9x19_M9SD";
				count = 20;
			};
		};
		
		class TransportWeapons {
			class _xx_USEC_STEYR_A1 {
				weapon = USEC_STEYR_A1;
				count = 15;
			};
			
			class _xx_USEC_STEYR_A1_M203 {
				weapon = USEC_STEYR_A1_M203;
				count = 5;
			};
			
			class _xx_USEC_STEYR_A2 {
				weapon = USEC_STEYR_A2;
				count = 5;
			};
			
			class _xx_USEC_STEYR_A2_M203 {
				weapon = USEC_STEYR_A2_M203;
				count = 5;
			};
			
			class _xx_M9 {
				weapon = "M9";
				count = 10;
			};
			
			class _xx_M9SD {
				weapon = M9SD;
				count = 10;
			};
		};
	};
};
