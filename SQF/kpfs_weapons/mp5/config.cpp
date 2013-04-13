// config.bin - 12:16:43 02/17/13, generated in 0.00 seconds
// Generated by unRap v1.06 by Kegetys
// Separate rootclasses: Disabled, Automatic comments: Enabled

#define private		0
#define protected		1
#define public		2

class CfgPatches {
	class KPFS_MP5 {
		units[] = {};
		weapons[] = {KPFS_MP5A3SD, KPFS_MP5A3};
		requiredVersion = 1.56;
		requiredAddons[] = {"CAWeapons"};
	};
};

class cfgWeapons {
	class MP5A5;	// External class reference
	class MP5SD;	// External class reference
	
	class KPFS_MP5A3SD : MP5SD {
		scope = public;
		model = "\kpfs_weapons\mp5_a3_sdzf.p3d";
		modelOptics = "\kpfs_weapons\optika_zfg3";
		picture = "\kpfs_weapons\data\icons\w_mp5a3sd_ca.paa";
		displayName = $STR_KPFS_MP5A3SD;
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
	
	class KPFS_MP5A3 : MP5A5 {
		scope = public;
		model = "\kpfs_weapons\mp5_a3_old";
		displayName = $STR_KPFS_MP5A3;
		picture = "\kpfs_weapons\data\icons\w_mp5a3_ca.paa";
		
		class Armory {
			author = $STR_AUTHOR_KPFS;
		};
	};
};