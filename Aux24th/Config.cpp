/*
This is the root config for the mod.
Mod contents are split into "sub-addons" based on detachment.
Infantry, Armored, Aviation, etc.


Scope Values and their Meaning:
scope =
    0: Class is unavailable (and used for inheritance only)
    1: Class is unavailable in the editor (can be accessed with a macro)
    2: Class is available in the editor
scopeCurator =
    0: Class is unavailable in Zeus.
    2: Class is available in Zeus.
scopeArsenal =
    0: Class is unavailable in the Arsenal.
    2: Class is available in the Arsenal.
*/

class CfgMods
{
    class Mod_Base;
    class Aux24th: Mod_Base
    {
        logo = "Aux24th\Data\UI\24thSpecOpsLogo.paa";
        logoOver = "Aux24th\Data\UI\24thSpecOpsLogo.paa";
        picture = "Aux24th\Data\UI\24thSpecOpsLogo.paa";
        name = "24th SpecOps Unit Aux Mod";
        dlcColor[] = {0,0,0,1};
    };
};


class CfgPatches
{
    class BNA_KC_Gear
    {
        author = "Taun";
        requiredVersion = 1;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
    };
};


class CfgFactionClasses
{
    class BNA_KC_Faction
    {
        dlc = "Aux24th";
        author = "Taun";
        scope = 2;
        scopeCurator = 2;
        displayName = "24th Specialized Operations";
    };
};