// You can ignore this, it basically just combines the CfgPatches file here. Makes it easy to keep things tidy.
#include "CfgPatches.hpp"


class CfgWeapons
{
    /*
    This is where you will define most your armors.
    Helmets, uniforms, vests, etc. are all set up in your weapons config, because Arma.
    */

    // Base Classes
    class ls_gar_phase2_helmet;
    class ls_gar_engineer_helmet;
    class lsd_gar_airborne_helmet;
    class ls_gar_phase2Pilot_helmet;
    class ls_gar_phase2_uniform;
    class UniformItem;
	class SWLB_clone_arc_armor;
	class SWLB_CEE_Rex_Helmet;
    class lsd_gar_arc_helmet;
    class SWLB_clone_officer_armor;
    class SWLB_clone_airborne_armor;
    class lsd_gar_tanker_nvg;
    class SWLB_clone_backpack;
    class SWLB_clone_medic_armor;
    class SEA_Helmet_Hazard_Base;
    class JLTS_Clone_jumppack_JT12;
    class V_PlateCarrier1_rgr;
    class lsd_gar_airborne_new;
    class ItemInfo;
    class JLTS_Clone_P2_ARC;
    class JLTS_CloneVestOfficer2;
    class JLTS_CloneHelmetP2;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };

    class Aux24th_Basic_Vest: SWLB_clone_basic_armor
    {
        // Mod Info
        dlc = "Aux24th";
        author = "Taun";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "24th Basic Trooper Vest";

        class ItemInfo: ItemInfo
        {
            containerClass = "Supply100";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.3;
                };
            };
        };
    };

	class Aux24th_Vest_Reaper: Aux24th_Basic_Vest
	{
        displayName = "Reaper's Vest"

        model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2"};
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\Reaper_Accessories_ARC.paa",
		"Aux24th\Textures\Reaper_Accessories_Officer.paa"
		};
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo1", "camo2"};
            uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
            containerClass = "Supply200";

            class HitpointsProtectionInfo
            {
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 25;
                    PassThrough = 0.1;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passThrough = 0.1;
                };
            };
        };
	};

    class Aux24th_Helmet_Reaper: SWLB_CEE_Rex_Helmet
    {
        displayName = "Reaper's Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\Reaper_Helmet_Rex.paa",
            "Aux24th\Textures\Reaper_visor_co.paa"
        };
    };

	class Aux24th_Uniform_Reaper : ls_gar_phase2_uniform
	{
		displayName = "Reaper's Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_Reaper"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Helmet_Deimos: lsd_gar_arc_helmet
    {
        displayName = "Deimos's Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\Deimos_Helmet_ARC.paa",
            "Aux24th\Textures\Reaper_visor_co.paa"
        };
    };


    class Aux24th_Uniform_Deimos : ls_gar_phase2_uniform
	{
		displayName = "Deimos's Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_Deimos"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Vest_Deimos: SWLB_clone_officer_armor
	{
        displayName = "Deimos's Vest"

        model = "\SWLB_clones\SWLB_clone_officer_armor";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\Deimos_Accessories_Officer.paa"
		};
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply200";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.2;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.2;
                };
            };
        };
	};

    class Aux24th_Uniform_STRKARC: ls_gar_phase2_uniform
	{
		displayName = "24th Strike Squad ARC Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_STRKARC"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Helmet_STRKARC: lsd_gar_arc_helmet
    {
        displayName = "24th Strike Squad ARC Helmet";
        hiddenSelections[] = {"camo", "visor"};
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_STRK_Helmet_ARC.paa",
            "Aux24th\Textures\ARC_Visor.paa"
        };
    };

    class Aux24th_Vest_STRKARC: Aux24th_Vest_Reaper
	{
        displayName = "24th Strike Squad Vest"
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\24th_ARC_STRK_Accessories_ARC.paa",
		"Aux24th\Textures\24th_ARC_STRK_Accessories_Officer.paa"
		};
	};

    class Aux24th_Vest_STRKOfficer: Aux24th_Vest_Deimos
	{
        displayName = "24th Strike Squad Officer Vest"

        model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\24th_STRK_Accessories_Officer.paa"
		};
	};

    class Aux24th_Helmet_STRKOfficer: ls_gar_phase2_helmet
    {
        displayName = "24th Strike Squad Officer Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Officer_STRK_Helmet_P2.paa",
            "Aux24th\Textures\Reaper_visor_co.paa"
        };
    };

    class Aux24th_Uniform_STRKOfficer: ls_gar_phase2_uniform
	{
		displayName = "24th Strike Squad Officer Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_STRKOfficer"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Uniform_STRKNCO: ls_gar_phase2_uniform
	{
		displayName = "24th Strike Squad NCO Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_STRKNCO"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Helmet_STRKNCO: ls_gar_phase2_helmet
    {
        displayName = "24th Strike Squad NCO Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_NCO_STRK_Helmet_P2.paa",
            "Aux24th\Textures\Reaper_visor_co.paa"
        };
    };

    class Aux24th_Uniform_STRKTrooper: ls_gar_phase2_uniform
	{
		displayName = "24th Strike Squad Trooper Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_STRKTrooper"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Helmet_STRKTrooper: ls_gar_phase2_helmet
    {
        displayName = "24th Strike Squad Trooper Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_STRK_Trooper_Helmet.paa",
            "Aux24th\Textures\Reaper_visor_co.paa"
        };
    };

    class Aux24th_Uniform_STRKPilot: ls_gar_phase2_uniform
	{
		displayName = "24th Strike Squad Pilot Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_STRKPilot"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Helmet_STRKPilot: ls_gar_phase2Pilot_helmet
    {
        displayName = "24th Strike Squad Pilot Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_STRK_PilotP2_Helmet.paa",
            "Aux24th\Textures\Reaper_visor_co.paa"
        };
    };

    class Aux24th_Vest_Airborne: SWLB_clone_airborne_armor
	{
        displayName = "24th Airborne Vest"
		hiddenSelectionsTextures[]=
		{
		    "Aux24th\Textures\24th_Airborne_Trooper_Heavy_Accessories_vest.paa", // Chest plate/Satchel
            "Aux24th\Textures\24th_Airborne_Trooper_Officer_Accessories_vest.paa", // Kama
            "Aux24th\Textures\24th_Airborne_Trooper_Heavy_Accessories_vest.paa" // Shoulder Round Holster
		};
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply100";
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 15;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 15;
                    passThrough = 0.3;
                };
            };
        };
	};

    class Aux24th_Vest_Airborne_NCO: Aux24th_Vest_Airborne
	{
        displayName = "24th Airborne NCO Vest"
		hiddenSelectionsTextures[]=
		{
		    "Aux24th\Textures\24th_Airborne_NCO_Heavy_Accessories.paa", // Chest plate/Satchel
            "Aux24th\Textures\24th_Airborne_NCO_Officer_Accessories.paa", // Kama
            "Aux24th\Textures\24th_Airborne_NCO_Heavy_Accessories.paa", // Shoulder Round holder
            "Aux24th\Textures\24th_Airborne_NCO_Heavy_Accessories.paa" // NCO pauldron
		};
	};

    class Aux24th_Vest_Airborne_Officer: Aux24th_Vest_Airborne_NCO
	{
        displayName = "24th Airborne Officer Vest"
		hiddenSelectionsTextures[]=
		{
		    "Aux24th\Textures\24th_Airborne_Officer_Heavy_Accessories.paa", // Chest plate/Satchel
            "Aux24th\Textures\24th_Airborne_Officer_Officer_Accessories.paa", // Kama
            "Aux24th\Textures\24th_Airborne_Officer_Heavy_Accessories.paa", // Shoulder Round Holder
            "Aux24th\Textures\24th_Airborne_Officer_Heavy_Accessories.paa" // Officer Pauldron
		};
	};

    class Aux24th_Vest_Maximus: Aux24th_Vest_Deimos
	{
        displayName = "Maximus's Vest"

        model = "\SWLB_clones\SWLB_clone_officer_armor.p3d";
        hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\Maximus_Officer_Accessories.paa"
		};
    };

    class Aux24th_Helmet_Maximus: SEA_Helmet_Hazard_Base
    {
        displayName = "Maximus's Hazard Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Maximus_Hazard_Helmet.paa",
            "Aux24th\Textures\Necc_CO.paa",
            "Aux24th\Textures\Maximus_Visor_Hazard_co.paa" // Red Visor
        };
    };

    class Aux24th_Maximus_Tanker: lsd_gar_tanker_nvg
    {
        displayName = "Maximus's Tanker NVG";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\Maximus_Tanker_Attachment.paa"
        };
    };

    class Aux24th_Uniform_Maximus: ls_gar_phase2_uniform
	{
		displayName = "Maximus's Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_Maximus"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Uniform_Blitz: ls_gar_phase2_uniform
	{
		displayName = "Blitz's Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_Blitz"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Uniform_ABTrooper: ls_gar_phase2_uniform
	{
		displayName = "24th Airborne Trooper Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_ABTrooper"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Uniform_ABMedic: ls_gar_phase2_uniform
	{
		displayName = "24th Airborne Medic Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_ABMedic"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Uniform_Trooper: ls_gar_phase2_uniform
	{
		displayName = "24th Trooper Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_Trooper"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Helmet_Trooper: ls_gar_phase2_helmet
    {
        displayName = "24th Trooper Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Basic_Trooper_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Aux24th_Helmet_MedicTrooper: ls_gar_phase2_helmet
    {
        displayName = "24th Medic Trooper Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Basic_Medic_Trooper_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Aux24th_Uniform_MedTrooper: ls_gar_phase2_uniform
	{
		displayName = "24th Medic Trooper Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_MedTrooper"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Vest_Airborne_Medic: Aux24th_Vest_Airborne
	{
        displayName = "24th Airborne Medic Vest"
		hiddenSelectionsTextures[]=
		{
		    "Aux24th\Textures\24th_Airborne_Medic_Heavy_Accessories.paa", // Chest plate/Satchel
            "Aux24th\Textures\24th_Airborne_Trooper_Officer_Accessories_vest.paa", // Kama
            "Aux24th\Textures\24th_Airborne_Medic_Heavy_Accessories.paa" // Shoulder Round Holster
		};
	};

    class Aux24th_Vest_Medic: Aux24th_Vest_Airborne_Medic
	{
        displayName = "24th Medic Vest"

        model = "\SWLB_clones\SWLB_clone_airborne_armor.p3d";
        hiddenSelections[] = {"camo1", "camo2", "ammo", "pauldron"};
		hiddenSelectionsTextures[]=
		{
		    "Aux24th\Textures\24th_Medic_Heavy_Accessories.paa" // Chest plate/Satchel
		};
        containerClass = "250";
	};

    class Aux24th_Backpack_Medic: SWLB_clone_backpack
    {
        displayName = "24th Clone Medical Backpack";
        hiddenSelectionsTextures[]=
        {
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_medic_co.paa",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",
            "Aux24th\Textures\24th_Clone_Medic_Backpack.paa",
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa"
        };
    };

    class Aux24th_Backpack: SWLB_clone_backpack
    {
        displayName = "24th Clone Backpack";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Clone_Backpack.paa",
            "Aux24th\Textures\24th_Clone_Backpack.paa",
            "",
            "",
            ""
        };
    };

    class Aux24th_Backpack_Heavy: Aux24th_Backpack
    {
        displayName = "24th Trooper Heavy Backpack";

        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Clone_Backpack.paa",      // Main Texture
            "Aux24th\Textures\24th_Clone_Backpack.paa",      // Cover
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Heavy
            "",                                                         // Medic
            ""                                                          // RTO
        };
    };

    class Aux24th_Uniform_NCO_Trooper: ls_gar_phase2_uniform
	{
		displayName = "24th NCO Trooper Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_NCO_Trooper"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};

    class Aux24th_Helmet_NCO_Trooper: ls_gar_phase2_helmet
    {
        displayName = "24th Trooper NCO Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Basic_NCO_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Aux24th_AB_Jetpack: JLTS_Clone_jumppack_JT12
    {
        displayName = "24th Airborne JT12 Jetpack";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24thAB_JT_12.paa"
        };
    };

    class Aux24th_AB_Jetpack_LR: JLTS_Clone_jumppack_JT12
    {
        displayName = "24th Airborne JT12 Jetpack LR";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24thAB_JT_12.paa"
        };
    };

    class Aux24th_Helmet_Blitz: lsd_gar_airborne_new
    {
        displayName = "24th Blitz Airborne Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Blitz_Airborne_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
        };
    };

    class Aux24th_Helmet_ABTrooper: lsd_gar_airborne_new
    {
        displayName = "24th Airborne Trooper Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Airborne_Trooper_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
        };
    };

    class Aux24th_Helmet_ABMedic: lsd_gar_airborne_new
    {
        displayName = "24th Airborne Medic Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Airborne_Medic_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
        };
    };

    class Aux24th_Helmet_Leslor: ls_gar_phase2Pilot_helmet
    {
        displayName = "24th Strike Leslor P2 Pilot Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\Leslor_P2_Pilot_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2pilot\data\visor_co.paa"
        };
    };

    class Aux24th_Helmet_Pilot: ls_gar_phase2Pilot_helmet
    {
        displayName = "24th Basic Pilot Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_Basic_Pilot_Helmet.paa",
            "ls_armor_bluefor\helmet\gar\phase2pilot\data\visor_co.paa"
        };
    };

    class Aux24th_Uniform_Pilot: ls_gar_phase2_uniform
	{
		displayName = "24th Basic Pilot Armor";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "Aux24th_Unit_Pilot"; 
			containerClass = "Supply150";
			mass = 40;
		};
	};
    class W41_Arc_HelmetTest: JLTS_Clone_P2_ARC						
	{
		author="41stEliteCorps";										
		scope=2;												
		scopeCurator = 2;
		displayName="[41st] ARC Helmet Test";							
		hiddenSelectionsTextures[]=		
		{
			"Aux24th\Textures\ARC_BASIC_HELMET.paa",
			"Aux24th\Textures\ARC_BASIC_HELMET.paa"
		};
	};
    class W41_CT_Helmet: JLTS_CloneHelmetP2						
	{
		author="41stEliteCorps";										
		scope=2;												
		scopeCurator = 2;
		displayName="[41st] Rank Helmet (CT)";
		hiddenSelectionsTextures[]= { "Aux24th\Textures\CT_HELMET.paa" };
	};
    class W41_SCT: W41_CT_Helmet						
	{
		displayName="[41st] Rank Helmet (SCT)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\SCT_HELMET.paa" };
	};
    class W41_VCT: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (VCT)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\VCT_HELMET.paa" };
	};
    class W41_CLC: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (CLC)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\41st_CLC_Helmet.paa" };
	};
    class W41_CSP: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (CSP)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\CSP_HELMET.paa" };
	};
    class W41_CP: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (CP)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\41st_CP_Helmet.paa" };
	};
    class W41_WO1: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (WO1)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\WO1_HELMET.paa" };
	};
    class W41_CS: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (CS)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\41st_CS_Helmet.paa" };
	};
    class W41_WO2: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (WO2)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\WO2_HELMET.paa" };
	};
    class W41_CGS: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (CGS)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\41st_CGS_Helmet.paa" };
	};
    class W41_WO3: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (WO3)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\WO3_HELMET.paa" };
	};
    class W41_CSM: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (CSM)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\CSM_HELMET.paa" };
	};
    class W41_WO4: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (WO4)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\WO4_HELMET.paa" };
	};
    class W41_CompSM: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (CompSM)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\41st_CompSM_Helmet.paa" };
	};
    class W41_WO5: W41_CT_Helmet							
	{
		displayName="[41st] Rank Helmet (WO5)";									
		hiddenSelectionsTextures[]= { "Aux24th\Textures\WO5_HELMET.paa" };
	};
   

};



class CfgVehicles
{
    /*
    This is where you defined your units, which are important; because in order to apply textures to a uniform,
    you need to have a unit that goes with it.
    */

    // Base Classes
    class lsd_gar_trooper_phase1;
    class SWLB_clone_backpack;
    class SWLB_clone_backpack_medic;
    class B_B_Parachute_02_F;
    class JLTS_Clone_jumppack_JT12;

    class Aux24th_Unit_Reaper: lsd_gar_trooper_phase1
    {
        displayName = "Reaper's Armor";
        uniformClass = "Aux24th_Uniform_Reaper";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\Reaper_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\Reaper_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_Deimos: lsd_gar_trooper_phase1
    {
        displayName = "Deimos's Armor";
        uniformClass = "Aux24th_Uniform_Deimos";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\Deimos_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\Deimos_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_STRKARC: lsd_gar_trooper_phase1
    {
        displayName = "24th Strike Squad ARC Armor";
        uniformClass = "Aux24th_Uniform_STRKARC";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_ARC_STRK_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_ARC_STRK_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_STRKOfficer: lsd_gar_trooper_phase1
    {
        displayName = "24th Strike Squad Officer Armor";
        uniformClass = "Aux24th_Uniform_STRKOfficer";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Officer_STRK_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Officer_STRK_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_STRKNCO: lsd_gar_trooper_phase1
    {
        displayName = "24th Strike Squad NCO Armor";
        uniformClass = "Aux24th_Uniform_STRKNCO";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_NCO_STRK_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_NCO_STRK_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_STRKTrooper: lsd_gar_trooper_phase1
    {
        displayName = "24th Strike Squad Trooper Armor";
        uniformClass = "Aux24th_Uniform_STRKTrooper";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Trooper_STRK_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Trooper_STRK_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_STRKPilot: lsd_gar_trooper_phase1
    {
        displayName = "24th Strike Squad Pilot Armor";
        uniformClass = "Aux24th_Uniform_STRKPilot";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_STRK_Pilot_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_STRK_Pilot_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_Maximus: lsd_gar_trooper_phase1
    {
        displayName = "Maximus's Armor";
        uniformClass = "Aux24th_Uniform_Maximus";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\Maximus_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\Maximus_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_Blitz: lsd_gar_trooper_phase1
    {
        displayName = "Blitz's Armor";
        uniformClass = "Aux24th_Uniform_Blitz";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Airborne_Blitz_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Airborne_Blitz_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_ABTrooper: lsd_gar_trooper_phase1
    {
        displayName = "24th Airborne Trooper Armor";
        uniformClass = "Aux24th_Uniform_ABTrooper";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Airborne_Trooper_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Airborne_Trooper_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_ABMedic: lsd_gar_trooper_phase1
    {
        displayName = "24th Airborne Medic Armor";
        uniformClass = "Aux24th_Uniform_ABMedic";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Airborne_Medic_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Airborne_Medic_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_Trooper: lsd_gar_trooper_phase1
    {
        displayName = "24th Trooper Armor";
        uniformClass = "Aux24th_Uniform_Trooper";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Basic_Trooper_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Basic_Trooper_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_MedTrooper: lsd_gar_trooper_phase1
    {
        displayName = "24th Medic Trooper Armor";
        uniformClass = "Aux24th_Uniform_MedTrooper";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Basic_Medic_Trooper_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Basic_Medic_Trooper_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Unit_NCO_Trooper: lsd_gar_trooper_phase1
    {
        displayName = "24th NCO Trooper Armor";
        uniformClass = "Aux24th_Uniform_NCO_Trooper";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Basic_NCO_Uniform_Upper.paa",    // Upper Half
            "Aux24th\Textures\24th_Basic_NCO_Uniform_Lower.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };

    class Aux24th_Backpack: SWLB_clone_backpack
    {
        // Mod Info
        dlc = "Aux24th";
        author = "Taun";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        maximumLoad = 400;

        displayName = "24th Trooper Backpack";

        picture = "Aux24th\Data\24th_Backpack_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Clone_Backpack.paa", // Main Texture
            "Aux24th\Textures\24th_Clone_Backpack.paa", // Cover
            "",                                                    // Heavy
            "",                                                    // Medic
            ""                                                     // RTO
        };
    };

    class Aux24th_Backpack_Medic: Aux24th_Backpack
    {
        displayName = "24th Medical Backpack";

        picture = "Aux24th\Data\24th_Backpack_Medic_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Clone_Medic_Backpack.paa", // Main Texture
            "Aux24th\Textures\24th_Clone_Medic_Backpack.paa", // Cover
            "",                                                          // Heavy
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",  // Medic
            ""                                                           // RTO
        };
    };

    class Aux24th_Backpack_Heavy: Aux24th_Backpack
    {
        displayName = "24th Trooper Heavy Backpack";

        picture = "Aux24th\Data\24th_Backpack_Heavy_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Clone_Backpack.paa",      // Main Texture
            "Aux24th\Textures\24th_Clone_Backpack.paa",      // Cover
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Heavy
            "",                                                         // Medic
            ""                                                          // RTO
        };
    };

    class Aux24th_AB_Jetpack: JLTS_Clone_jumppack_JT12
    {
        // Mod Info
        dlc = "Aux24th";
        author = "Taun";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        maximumLoad = 400;

        knd_isJetpack = 1;
        knd_jetpack_acceeration = 3;
        knd_jetpack_resistance = 6;

        jlts_isjumppack = 0;
        tas_is_jetpack = 0;

        displayName = "24th Airborne JT12 Jetpack";

        picture = "Aux24th\Data\24th_Backpack_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24thAB_JT_12.paa"
        };
    };

    class Aux24th_AB_Jetpack_LR: Aux24th_AB_Jetpack
    {
        displayName = "24th Airborne JT12 Jetpack LR";

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };

    class Aux24th_Unit_Pilot: lsd_gar_trooper_phase1
    {
        displayName = "24th Basic Pilot Armor";
        uniformClass = "Aux24th_Uniform_Pilot";
        hiddenSelectionsTextures[] =
        {
            "Aux24th\Textures\24th_Basic_Pilot_Upper_Uniform.paa",    // Upper Half
            "Aux24th\Textures\24th_Basic_Pilot_Lower_Uniform.paa",    // Lower Half
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
        };
    };
};

class CfgPatches
{
	class LF_Weapon_Unit_WestarM5
	{
		author="Last Force Project";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"a3_anims_f",
			"a3_weapons_f"
		};
	};
};
class CfgAmmo
{
	class Aux24th_Ammo_Base;
	class Aux24th_ammo_he;
	class Aux24th_ammo_westar_gr: Aux24th_ammo_he
	{
		submunitionammo="ammo_Penetrator_Titan_AT";
		indirectHit=2;
		indirectHitRange=3;
		hit=1000;
		model="LF_Weapon_Unit\main\laser_red.p3d";
		typicalSpeed=1550;
		explosive=1;
		effectsMissile="missile3";
		caliber=100;
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		effectfly="Aux24th_plasma_red";
		muzzleEffect = "BIS_fnc_effectFiredRifle";
	};
	class Aux24th_ammo_westar_gl: Aux24th_ammo_he
	{
		submunitionammo="ammo_Penetrator_Titan_AT";
		indirectHit=20;
		indirectHitRange=5;
		hit=92;
		tracerscale=2.5;
		model="LF_Weapon_Unit\main\laser_red.p3d";
		typicalSpeed=1550;
		explosive=1;
		effectsMissile="missile3";
		caliber=12;
		submunitionInitSpeed=1000;
		submunitionParentSpeedCoef=0;
		effectfly="Aux24th_plasma_red";
		muzzleEffect = "BIS_fnc_effectFiredRifle";
	};
	class Aux24th_ammo_westar_auto: Aux24th_Ammo_Base
	{
		hit=26.45;
		typicalspeed=450;
		caliber=1.4;
		model="LF_Weapon_Unit\main\laser_blue.p3d";
		dangerRadiusBulletClose=4;
		dangerRadiusHit=8;
		suppressionRadiusBulletClose=2;
		suppressionRadiusHit=4;
		audibleFire=45;
		airFriction=0;
		timetolive=6;
		effectfly="Aux24th_plasma_blue";
	};
	class Aux24th_ammo_westar_sniper_red: Aux24th_Ammo_Base
	{
		hit=109.25;
		model="LF_Weapon_Unit\main\laser_blue.p3d";
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=8;
		dangerRadusHit=12;
		suppressionRadusBulletClose=6;
		suppressionRadusHit=8;
		audiblefire=120;
		brightness=2;
		airFriction=0;
		waterFriction=0;
		caliber=3.8000001;
		timetolive=20;
		effectfly="Aux24th_plasma_blue";
		typicalspeed=2250;
	};
};
class CfgMagazines
{
    class Aux24th_mag_base;
    class Aux24th_WestarM5_Mag: Aux24th_mag_base
	{
		author="Last Force Project";
		scope=2;
		tracersEvery=1;
		type=16;
		mass=10;
		initSpeed=310;
		picture="\LF_Weapon_Unit\westarm5a\ui\westar_magazine.paa";
		displayName="Westar M5 energy plasma cell (100rnd)";
		ammo="Aux24th_ammo_westar_auto";
		count=100;
		descriptionShort="100rnd energy cell for Westar M5";
		model="LF_Weapon_Unit\westarm5\westarm5mag.p3d";
	};
	class AUX24_WestarM5_Mag_Sniper: Aux24th_mag_base
	{
		author="Last Force Project";
		scope=2;
		tracersEvery=1;
		type=16;
		mass=10;
		initSpeed=2000;
		picture="\LF_Weapon_Unit\westarm5a\ui\westar_magazine.paa";
		displayName="Westar M5 sniper high energy plasma cell (10rnd)";
		ammo="Aux24th_ammo_westar_sniper_red";
		count=10;
		descriptionShort="100rnd sniper high energy plasma cell for Westar M5";
		model="LF_Weapon_Unit\westarm5\westarm5mag.p3d";
	};
	class Aux24th_WestarM5_GR: Aux24th_mag_base
	{
		author="Last Force Project";
		scope=2;
		tracersEvery=1;
		type=16;
		mass=5;
		initSpeed=710;
		picture="\LF_Weapon_Unit\westarm5a\ui\westar_magazine.paa";
		displayName="Westar M5 high explosive plasma (3rnd)";
		ammo="Aux24th_ammo_westar_gr";
		count=3;
		descriptionShort="3rnd high explosive plasma cell for Westar M5";
		model="LF_Weapon_Unit\westarm5\westarm5mag.p3d";
	};
	class Aux24th_WestarM5_Mag_GL: Aux24th_mag_base
	{
		author="Last Force Project";
		scope=2;
		tracersEvery=1;
		type=16;
		mass=20;
		initSpeed=80;
		picture="\LF_Weapon_Unit\westar55\ui\w55mag.paa";
		displayName="Westar M5 high explosive plasma (3rnd)";
		ammo="Aux24th_ammo_westar_gl";
		count=3;
		descriptionShort="3rnd high explosive plasma cell for Westar M5";
	};
};
class WeaponSlotsInfo;
class Cowsslot;
class MuzzleSlot;
class Mode_SemiAuto;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class Aux24th_rifle_base: Rifle
	{
		author="Last Force Project";
		scope=1;
		class WeaponSlotsInfo
		{
			class SlotInfo;
		};
		class GunParticles;
		class AnimationSources;
	};
	class Aux24th_WestarM5: Aux24th_rifle_base
	{
		scope=2;
		model="LF_Weapon_Unit\westarm5\westarm5.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"LF_Weapon_Unit\westarm5a\anims\westarm5a2.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="LF_Weapon_Unit\westarm5a\ui\westarm5standard.paa";
		magazines[]=
		{
			"Aux24th_WestarM5_Mag"
		};
		displayname="Westar M5";
		descriptionShort="Standard Westar-M5";
		selectionFireAnim="zasleh";
		class Library
		{
			libTextDesc="";
		};
		drySound[]=
		{
			"LF_Weapon_Unit\main\sounds\dc15_empty.wss",
			1,
			1,
			50
		};
		reloadMagazineSound[]=
		{
			"LF_Weapon_Unit\main\sounds\dc15_reload.wss",
			0.8,
			1,
			10
		};
		soundBullet[]=
		{
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"close",
			"short",
			"medium"
		};
		recoil="Aux24th_recoil";
		fireLightDuration=0.050000001;
		fireLightIntensity=0.40000001;
		fireLightDiffuse[]={0,0,0.0099999998};
		fireLightAmbient[]={0,0,0};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"LF_Weapon_Unit\westarm5\sounds\westarm5_shot.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
			};
			reloadTime=0.3;
			dispersion=0.0001;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"LF_Weapon_Unit\westarm5\sounds\westarm5_shot.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
			};
			reloadTime=0.10;
			dispersion=0.015;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=500;
		class OpticsModes
		{
			class sight
			{
				opticsID=1;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					""
				};
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=0.5;
				opticsZoomInit=0.75;
				discreteInitIndex=0;
				distanceZoomMin=200;
				distanceZoomMax=200;
				memoryPointCamera="eye";
				visionMode[]={};
				opticsFlare="false";
				cameraDir="";
			};
			class scope: sight
			{
				opticsID=2;
				opticsZoomMin=0.125;
				opticsZoomMax=0.125;
				opticsZoomInit=0.125;
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
			class Cowsslot: Cowsslot
			{
				compatibleItems[]=
				{
					"Aux24th_WestarM5_scope",
					"Aux24th_westarm5aholo_scope"
				};
			};
		};
	};
	class UGL_F;
	class Aux24th_WestarM5_GL: Aux24th_WestarM5
	{
		muzzles[] = {"this","UGL"};
		scope=2;
		model="LF_Weapon_Unit\westarm5\westarm5gl.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"LF_Weapon_Unit\westarm5a\anims\westarm5a2.rtm"
		};
		reloadAction="ReloadMagazine";
		picture="LF_Weapon_Unit\westarm5a\ui\westarm5standard.paa";
		magazines[]=
		{
			"Aux24th_WestarM5_Mag"
		};
		displayname="Westar M5 with GL";
		descriptionShort="Modifided Westar-M5 with GL";
		selectionFireAnim="zasleh";
		class UGL: UGL_F
	    {
			displayName = "[Aux24th] Westar-M5-GL";
			descriptionShort = "GL for the Westar-M5 Platform";
			useModelOptics = 0;
			useExternalOptic = 0;
			magazines[] = {"Aux24th_WestarM5_Mag_GL"};
			magazineWell[] = {};
			cameraDir = "OP_look";
			discreteDistance[] = {100, 200, 300, 400};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"};
			discreteDistanceInitIndex = 1;
			reloadAction = "ReloadMagazine";
			reloadMagazineSound[] = {"LF_Weapon_Unit\main\sounds\dc15_reload.wss",5,1,10};
			drySound[]={"LF_Weapon_Unit\main\sounds\dc15_empty.wss"};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"LF_Weapon_Unit\westarm5\sounds\westarm5_shot.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
			};
			reloadTime=0.45;
			dispersion=0.002;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="";
				closure1[]={};
				closure2[]={};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect="";
				begin1[]=
				{
					"LF_Weapon_Unit\westarm5\sounds\westarm5_shot.ogg",
					1,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001
				};
			};
			reloadTime=0.15;
			dispersion=0.005;
			minRange=5;
			minRangeProbab=0.30000001;
			midRange=25;
			midRangeProbab=0.60000002;
			maxRange=50;
			maxRangeProbab=0.1;
			aiRateOfFire=2;
			aiRateOfFireDistance=25;
		};
		class close: Single
		{
			showToPlayer=0;
			aiRateOfFire=0.25;
			aiRateOfFireDistance=400;
			minRange=0;
			minRangeProbab=0.050000001;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.2;
		};
		class short: close
		{
			aiRateOfFire=0.5;
			aiRateOfFireDistance=500;
			minRange=300;
			minRangeProbab=0.2;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=500;
			maxRangeProbab=0.2;
		};
		class medium: close
		{
			aiRateOfFire=1;
			aiRateOfFireDistance=900;
			minRange=400;
			minRangeProbab=0.2;
			midRange=700;
			midRangeProbab=0.69999999;
			maxRange=900;
			maxRangeProbab=0.2;
		};
		inertia=0.30000001;
		dexterity=1.7;
		initSpeed=500;
	};
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class Aux24th_WestarM5_scope: ItemCore
	{
		displayName="Westar M-5 scope";
		author="Last Force Project";
		picture="LF_Weapon_Unit\westarm5a\ui\sniper_scope.paa";
		model="LF_Weapon_Unit\westarm5\westarm5scope.p3d";
		scope=2;
		descriptionShort="";
		weaponInfoType="RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=8;
			opticType=1;
			optics=1;
			modelOptics="LF_Weapon_Unit\westarm5\westarm5optic.p3d";
			class OpticsModes
			{
				class WestarM5scope_sights
				{
					opticsID=1;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"Default"
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
				};
				class WestarM5scope_scope: WestarM5scope_sights
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur3"
					};
					opticsZoomMin=0.0625;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200};
					discreteDistanceInitIndex=1;
					distanceZoomMin=300;
					distanceZoomMax=1200;
					discretefov[]=
					{
						"0.25/3",
						"0.25/6",
						"0.25/9",
						"0.25/12",
						"0.25/15",
						"0.25/20"
					};
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"Normal",
						"NVG",
						"TI"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
			};
		};
		inertia=0.1;
	};
};