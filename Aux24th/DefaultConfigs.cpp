// This is not included in the mod itself
// This file is so you can easily copy/paste whatever config you may need.
// Default textures are included.

// ┌───────────┐
// │ Helmets │
// └───────────┘
// Phase 2
class WP_Helmet_x: ls_gar_phase2_helmet
{
    displayName = "Phase 2 Helmet";
    hiddenSelectionsTextures[] =
    {
        "ls_armor_bluefor\helmet\gar\phase2\data\helmet_co.paa",
        "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
    };
};
// Engineer
class WP_Helmet_x: ls_gar_engineer_helmet
{
    displayName = "Engineer Helmet";
    hiddenSelectionsTextures[]=
    {
        "ls_armor_bluefor\helmet\gar\engineer\data\helmet_co.paa",
        "ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
        "ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
    };
};
// Airborne
class WP_Helmet_x: lsd_gar_airborne_helmet
{
    displayName = "Engineer Helmet";
    hiddenSelectionsTextures[]=
    {
        "ls_armor_bluefor\helmet\gar\airborne\data\helmet_co.paa",
        "ls_armor_bluefor\helmet\gar\airborne\data\visor_co.paa"
    };
}
// Phase 2 Pilot
class WP_Helmet_x: ls_gar_phase2Pilot_helmet
{
    displayName = "Phase 2 Pilot Helmet"; 
    hiddenSelectionsTextures[]=
    {
        "ls_armor_bluefor\helmet\gar\phase2Pilot\data\helmet_co.paa",
        "ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
    };
};


// ┌─────────────────┐
// │   Uniforms   │
// └─────────────────┘
class WP_Uniform_x: ls_gar_phase2_uniform
{
    displayName = "Clone Trooper Armor";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = "WP_Unit_x"; // MAKE SURE TO CHANGE THIS
        containerClass = "Supply150";
        mass = 40;
    };
};


// ┌───────────────────────┐
// │       Units       │
// └───────────────────────┘
class WP_Unit_x: lsd_gar_trooper_phase1
{
    displayName = "Clone Trooper";
    uniformClass = "WP_Uniform_x";
    hiddenSelectionsTextures[] =
    {
        "ls_armor_bluefor\uniform\gar\phase2\data\camo1_co.paa",    // Upper Half
        "ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa",    // Lower Half
        "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" // Undersuit / Body Glove
    };
};