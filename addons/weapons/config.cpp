#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {
            QCLASS(Box_Weapons)
        };
        weapons[] = {
            QCLASS(MX_BlackCamo),
            QCLASS(MX_GL_BlackCamo)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"tacs_main"};
        author[]= {"Jonpas", "Pomigit", "BadHabitz"};
        authorUrl = "https://github.com/Theseus-Aegis/TheseusServices";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
