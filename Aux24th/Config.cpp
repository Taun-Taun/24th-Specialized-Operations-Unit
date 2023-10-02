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
    class SWLB_clone_P15_Helmet;
    class SWLB_clone_officer_armor;
    class SWLB_clone_airborne_armor;
    class lsd_gar_tanker_nvg;
    class SWLB_clone_backpack;
    class SWLB_clone_medic_armor;

	class Aux24th_Vest_Reaper: SWLB_clone_arc_armor
	{
        displayName = "Reaper's Vest"
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\Reaper_Accessories_ARC.paa",
		"Aux24th\Textures\Reaper_Accessories_Officer.paa"
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

    class Aux24th_Helmet_Deimos: SWLB_clone_P15_Helmet
    {
        displayName = "Deimos's Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\Deimos_Helmet_ARC.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
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
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\Deimos_Accessories_Officer.paa"
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

    class Aux24th_Helmet_STRKARC: SWLB_clone_P15_Helmet
    {
        displayName = "24th Strike Squad ARC Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\24th_STRK_Helmet_ARC.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
    };

    class Aux24th_Vest_STRKARC: SWLB_clone_arc_armor
	{
        displayName = "24th Strike Squad Vest"
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\24th_ARC_STRK_Accessories_ARC.paa",
		"Aux24th\Textures\24th_ARC_STRK_Accessories_Officer.paa"
		};
	};

    class Aux24th_Vest_STRKOfficer: SWLB_clone_officer_armor
	{
        displayName = "24th Strike Squad Officer Vest"
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
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
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
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
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
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
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
            "ls_armor_bluefor\helmet\gar\phase2pilot\data\visor_co.paa"
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
	};

    class Aux24th_Vest_Airborne_NCO: SWLB_clone_airborne_armor
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

    class Aux24th_Vest_Airborne_Officer: SWLB_clone_airborne_armor
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

    class Aux24th_Vest_Maximus: SWLB_clone_officer_armor
	{
        displayName = "Maximus's Vest"
		hiddenSelectionsTextures[]=
		{
		"Aux24th\Textures\Maximus_Officer_Accessories.paa"
		};
	};

    class Aux24th_Helmet_Maximus: ls_gar_phase2_helmet
    {
        displayName = "Maximus's Helmet";
        hiddenSelectionsTextures[]=
        {
            "Aux24th\Textures\Maximus_P2_Helmet.paa",
            "Aux24th\Textures\Maximus_Visor.paa" // Blue Visor
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

    class Aux24th_Vest_Airborne_Medic: SWLB_clone_airborne_armor
	{
        displayName = "24th Airborne Medic Vest"
		hiddenSelectionsTextures[]=
		{
		    "Aux24th\Textures\24th_Airborne_Medic_Heavy_Accessories.paa", // Chest plate/Satchel
            "Aux24th\Textures\24th_Airborne_Trooper_Officer_Accessories_vest.paa", // Kama
            "Aux24th\Textures\24th_Airborne_Medic_Heavy_Accessories.paa" // Shoulder Round Holster
		};
	};

    class Aux24th_Vest_Medic: SWLB_clone_medic_armor
	{
        displayName = "24th Medic Vest"
		hiddenSelectionsTextures[]=
		{
		    "Aux24th\Textures\24th_Medic_Heavy_Accessories.paa" // Chest plate/Satchel
		};
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
}