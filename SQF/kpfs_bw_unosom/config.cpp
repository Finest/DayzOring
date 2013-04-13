// config.bin - 16:10:54 01/16/13, generated in 0.02 seconds
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

class CfgPatches {
	class KPFS_BW_UNOSOM {
		units[] = {"KPFS_BW_Soldier_UN", "KPFS_BW_Soldier_UNV"};
		weapons[] = {};
		requiredVersion = 1.6;
		requiredAddons[] = {"CACharacters2", "CACharacters_E"};
	};
};

class CfgVehicleClasses {
	class KPFS_BW_MEN_UN {
		displayName = $STR_KPFS_BW_MEN_UN;
	};
};

class CfgVehicles {
	class USMC_Soldier_Base;	// External class reference
	class USMC_Soldier_Officer;	// External class reference
	
	class KPFS_BW_Soldier_UN : USMC_Soldier_Base {
		scope = public;
		side = TWest;
		faction = BIS_GER;
		vehicleClass = KPFS_BW_MEN_UN;
		languages[] = {"EN"};
		faceType = "Man";
		displayName = $STR_KPFS_BW_SOLDIER_UN;
		model = "\kpfs_bw_unosom\bw_soldier_un.p3d";
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_un_ca.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canCarryBackPack = 1;
		canHideBodies = true;
		
		class Wounds {
			tex[] = {};
			mat[] = {"kpfs_bw_unosom\data\bw_soldier_un.rvmat", "kpfs_bw_unosom\data\bw_soldier_un_wound1.rvmat", "kpfs_bw_unosom\data\bw_soldier_un_wound2.rvmat"};
		};
		hiddenSelections[] = {"Camo01", "boonie", "helm", "holster", "lamp"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\data\bw_soldier_un_co.paa"};
	};
	
	class KPFS_BW_Soldier_light_UN : KPFS_BW_Soldier_UN {
		displayName = $STR_KPFS_BW_SOLDIER_LIGHT_UN;
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_unb_ca.paa";
		weapons[] = {"Throw", "Put", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		magazines[] = {};
		respawnWeapons[] = {};
		respawnmagazines[] = {};
		hiddenSelections[] = {"Camo01", "barett", "helm", "holster", "kts"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\data\bw_soldier_un_co.paa"};
	};
	
	class KPFS_BW_SquadLeader_UN : KPFS_BW_Soldier_UN {
		scope = public;
		displayName = $STR_KPFS_BW_SLEADER_UN;
		picture = "\kpfs_bw_unosom\data\ico\i_bw_olt_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canCarryBackPack = 1;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "boonie", "helm"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\data\bw_sleader_un_co.paa"};
	};
	
	class KPFS_BW_Officer_UN : KPFS_BW_Soldier_UN {
		scope = public;
		displayName = $STR_KPFS_BW_OFFICER_UN;
		model = "\kpfs_bw_unosom\bw_officer_un.p3d";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_uno_ca.paa";
		picture = "\kpfs_bw_unosom\data\ico\i_bw_maj_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canCarryBackPack = 1;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\data\bw_officer_un_co.paa"};
	};
	
	class KPFS_BW_Soldier_hat_UN : KPFS_BW_Soldier_UN {
		scope = public;
		displayName = $STR_KPFS_BW_SOLDIER_UN_BOONIE;
		model = "\kpfs_bw_unosom\bw_soldier_un.p3d";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_unb_ca.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canCarryBackPack = 1;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "barett", "helm"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\data\bw_soldier_un_co.paa"};
	};
	
	class KPFS_BW_TeamLeader_UN : KPFS_BW_Soldier_hat_UN {
		scope = public;
		displayName = $STR_KPFS_BW_TLEADER_UN;
		picture = "\kpfs_bw_unosom\data\ico\i_bw_fw_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canCarryBackPack = 1;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "barett", "helm"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\data\bw_tleader_un_co.paa"};
	};
	
	class KPFS_BW_Soldier_UNV : USMC_Soldier_Base {
		scope = public;
		side = TWest;
		faction = BIS_GER;
		vehicleClass = KPFS_BW_MEN_UN;
		languages[] = {"EN"};
		faceType = "Man";
		displayName = $STR_KPFS_BW_SOLDIER_UN_VEST;
		model = "\kpfs_bw_unosom\vest\bw_soldier_unv.p3d";
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		canCarryBackPack = 1;
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_unv_ca.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		
		class Wounds {
			tex[] = {};
			mat[] = {"kpfs_bw_unosom\vest\bw_soldier_unv.rvmat", "kpfs_bw_unosom\vest\bw_soldier_unv_wound1.rvmat", "kpfs_bw_unosom\vest\bw_soldier_unv_wound2.rvmat"};
		};
		hiddenSelections[] = {"Camo01", "boonie", "helm", "holster", "lamp", "goggles"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\vest\bw_soldier_unv_co.paa"};
	};
	
	class KPFS_BW_SquadLeader_UNV : KPFS_BW_Soldier_UNV {
		scope = public;
		displayName = $STR_KPFS_BW_SLEADER_UN_VEST;
		picture = "\kpfs_bw_unosom\data\ico\i_bw_olt_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "boonie", "helm", "goggles"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\vest\bw_soldier_unv_co.paa"};
	};
	
	class KPFS_BW_Soldier_UNVb : KPFS_BW_Soldier_UNV {
		scope = public;
		displayName = $STR_KPFS_BW_SOLDIER_UNVB;
		model = "\kpfs_bw_unosom\vest\bw_soldier_unv.p3d";
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_unvb_ca.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "barett", "helm", "holster", "lamp", "goggles"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\vest\bw_soldier_unv_co.paa"};
	};
	
	class KPFS_BW_TeamLeader_UNV : KPFS_BW_Soldier_UNVb {
		scope = public;
		displayName = $STR_KPFS_BW_TLEADER_UN_VEST;
		picture = "\kpfs_bw_unosom\data\ico\i_bw_fw_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "barett", "helm", "holster", "goggles"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\vest\bw_soldier_unv_co.paa"};
	};
	
	class KPFS_BW_Soldier_UNh : KPFS_BW_Soldier_UN {
		scope = public;
		displayName = $STR_KPFS_BW_SOLDIER_UN_M62;
		model = "\kpfs_bw_unosom\bw_soldier_un.p3d";
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_unh_ca.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "barett", "boonie", "holster", "lamp"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\data\bw_soldier_un_co.paa"};
	};
	
	class KPFS_BW_Soldier_UNVh : KPFS_BW_Soldier_UNV {
		scope = public;
		displayName = $STR_KPFS_BW_SOLDIER_UN_M92;
		model = "\kpfs_bw_unosom\vest\bw_soldier_unv.p3d";
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_unvh_ca.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "barett", "boonie", "holster", "lamp"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\vest\bw_soldier_unv_co.paa"};
	};
	
	class KPFS_BW_Medic_UN : KPFS_BW_Soldier_UN {
		scope = public;
		displayName = $STR_KPFS_BW_MEDIC_UN;
		model = "\kpfs_bw_unosom\bw_medic_un.p3d";
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_un_ca.paa";
		picture = "\Ca\characters\data\Ico\i_med_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		accuracy = 3.7;	// accuracy needed to recognize type of this target
		attendant = true;
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\medic\bw_medic_un_co.paa"};
		
		class Wounds {
			tex[] = {};
			mat[] = {"kpfs_bw_unosom\medic\bw_medic_un.rvmat", "kpfs_bw_unosom\medic\bw_medic_un_wound1.rvmat", "kpfs_bw_unosom\medic\bw_medic_un_wound2.rvmat"};
		};
	};
	
	class KPFS_BW_MP_UN : KPFS_BW_Soldier_hat_UN {
		scope = public;
		displayName = $STR_KPFS_BW_MPOLICE_UN;
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_unb_ca.paa";
		Icon = "\kpfs_bw_unosom\data\icon\i_mp_ca.paa";
		picture = "\kpfs_bw_unosom\data\ico\i_bw_fj_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "boonie", "helm", "goggles"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\mp\bw_mp_un_co.paa"};
	};
	
	class KPFS_BW_Soldier_vestc_UN : USMC_Soldier_Base {
		scope = public;
		side = TWest;
		faction = BIS_GER;
		vehicleClass = KPFS_BW_MEN_UN;
		languages[] = {"EN"};
		faceType = "Man";
		displayName = $STR_KPFS_BW_SOLDIER_VESTC_UN;
		model = "\kpfs_bw_unosom\camo\bw_soldier_unvc.p3d";
		identityTypes[] = {"Head_DE", "Language_EN_EP1", "CDF_Glasses"};
		genericNames = "GermanMen";
		canCarryBackPack = 1;
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_un_ca.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		
		class Wounds {
			tex[] = {};
			mat[] = {"kpfs_bw_unosom\camo\bw_soldier_vestc.rvmat", "kpfs_bw_unosom\camo\bw_soldier_vestc_wound1.rvmat", "kpfs_bw_unosom\camo\bw_soldier_vestc_wound2.rvmat"};
		};
		hiddenSelections[] = {"Camo01", "boonie", "barett", "holster", "lamp"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\camo\bw_soldier_vestc_co.paa"};
	};
	
	class KPFS_BW_SquadLeader_vestc_UN : KPFS_BW_Soldier_vestc_UN {
		scope = public;
		displayName = $STR_KPFS_BW_SLEADER_VESTC_UN;
		picture = "\kpfs_bw_unosom\data\ico\i_bw_olt_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "boonie", "barett"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\camo\bw_soldier_vestc_co.paa"};
	};
	
	class KPFS_BW_TeamLeader_vestc_UN : KPFS_BW_SquadLeader_vestc_UN {
		scope = public;
		displayName = $STR_KPFS_BW_TLEADER_VESTC_UN;
		picture = "\kpfs_bw_unosom\data\ico\i_bw_fw_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "boonie", "barett"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\camo\bw_soldier_vestc_co.paa"};
	};
	
	class KPFS_BW_Officer_vestc_UN : KPFS_BW_SquadLeader_vestc_UN {
		scope = public;
		displayName = $STR_KPFS_BW_OFFICER_VESTC_UN;
		portrait = "\kpfs_bw_unosom\data\portrait\combarhead_bw_uno_ca.paa";
		picture = "\kpfs_bw_unosom\data\ico\i_bw_maj_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		magazines[] = {};
		respawnWeapons[] = {"Throw", "Put"};
		respawnMagazines[] = {};
		weaponSlots = 1	+ 4	+ 12*	256	+ 2*	4096	+ 2	+ 8*	16 + 12*131072;
		canHideBodies = true;
		hiddenSelections[] = {"Camo01", "boonie", "helm", "lamp", "barett"};
		hiddenSelectionsTextures[] = {"\kpfs_bw_unosom\camo\bw_soldier_vestc_co.paa"};
	};
};
