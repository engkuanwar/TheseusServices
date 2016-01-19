#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            //@todo - for Zeus
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author[]= {"Pomigit", "BadHabitz", "Jonpas"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
