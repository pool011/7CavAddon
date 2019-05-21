#define MACRO_VEH_CARGO \
    class TransportBackpacks {}; \
    class TransportItems {}; \
    class TransportMagazines {}; \
    class TransportWeapons {}

#define MACRO_VEH_CAR_CREW \
    crew = "Cav_B_C_Rifleman_F"; \
    typicalCargo[] = {"Cav_B_C_Rifleman_F"}

class CfgVehicles {
    class rhsusf_m1025_d_m2;
    class rhsusf_m1025_d_Mk19;
    class rhsusf_m1025_d;
    class rhsusf_m1043_d_m2;
    class rhsusf_m1043_d_mk19;
    class rhsusf_m1043_d;
    class rhsusf_m1045_d;
    class rhsusf_m998_d_2dr_fulltop;
    class rhsusf_m998_d_2dr_halftop;
    class rhsusf_m998_d_2dr;
    class rhsusf_m998_d_4dr_fulltop;
    class rhsusf_m998_d_4dr_halftop;
    class rhsusf_m998_d_4dr;
    class rhsusf_m966_d;
    
    class Cav_Charlie_m1025_d_m2_f : rhsusf_m1025_d_m2 {
        _generalMacro = "Cav_Charlie_m1025_d_m2_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;

        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1025_d_Mk19_f : rhsusf_m1025_d_Mk19 {
        _generalMacro = "Cav_Charlie_m1025_d_Mk19_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1025_d_f : rhsusf_m1025_d {
        _generalMacro = "Cav_Charlie_m1025_d_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1043_d_m2_f : rhsusf_m1043_d_m2 {
        _generalMacro = "Cav_Charlie_m1043_d_m2_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;

        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1043_d_mk19_f : rhsusf_m1043_d_mk19 {
        _generalMacro = "Cav_Charlie_m1043_d_mk19_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1043_d_f : rhsusf_m1043_d {
        _generalMacro = "Cav_Charlie_m1043_d_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1045_d_f : rhsusf_m1045_d {
        _generalMacro = "Cav_Charlie_m1045_d_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_d_2dr_fulltop_f : rhsusf_m998_d_2dr_fulltop {
        _generalMacro = "Cav_Charlie_m998_d_2dr_fulltop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_d_2dr_halftop_f : rhsusf_m998_d_2dr_halftop {
        _generalMacro = "Cav_Charlie_m998_d_2dr_halftop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_d_2dr_f : rhsusf_m998_d_2dr {
        _generalMacro = "Cav_Charlie_m998_d_2dr_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_d_4dr_fulltop_f : rhsusf_m998_d_4dr_fulltop {
        _generalMacro = "Cav_Charlie_m998_d_4dr_fulltop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_d_4dr_halftop_f : rhsusf_m998_d_4dr_halftop {
        _generalMacro = "Cav_Charlie_m998_d_4dr_halftop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_d_4dr_f : rhsusf_m998_d_4dr {
        _generalMacro = "Cav_Charlie_m998_d_4dr_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m966_d_f : rhsusf_m966_d {
        _generalMacro = "Cav_Charlie_m966_d_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };


    class rhsusf_m1025_w_m2;
    class rhsusf_m1025_w_mk19;
    class rhsusf_m1025_w;
    class rhsusf_m1043_w_m2;
    class rhsusf_m1043_w_mk19;
    class rhsusf_m1043_w;
    class rhsusf_m1045_w;
    class rhsusf_m998_w_2dr_fulltop;
    class rhsusf_m998_w_2dr_halftop;
    class rhsusf_m998_w_2dr;
    class rhsusf_m998_w_4dr_fulltop;
    class rhsusf_m998_w_4dr_halftop;
    class rhsusf_m998_w_4dr;
    class rhsusf_m966_w;

    class Cav_Charlie_m1025_w_m2_f : rhsusf_m1025_w_m2 {
        _generalMacro = "Cav_Charlie_m1025_w_m2_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1025_w_Mk19_f : rhsusf_m1025_w_Mk19 {
        _generalMacro = "Cav_Charlie_m1025_w_Mk19_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1025_w_f : rhsusf_m1025_w {
        _generalMacro = "Cav_Charlie_m1025_w_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1043_w_m2_f : rhsusf_m1043_w_m2 {
        _generalMacro = "Cav_Charlie_m1043_w_m2_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1043_w_mk19_f : rhsusf_m1043_w_mk19 {
        _generalMacro = "Cav_Charlie_m1043_w_mk19_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1043_w_f : rhsusf_m1043_w {
        _generalMacro = "Cav_Charlie_m1043_w_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m1045_w_f : rhsusf_m1045_w {
        _generalMacro = "Cav_Charlie_m1045_w_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_w_2dr_fulltop_f : rhsusf_m998_w_2dr_fulltop {
        _generalMacro = "Cav_Charlie_m998_w_2dr_fulltop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_w_2dr_halftop_f : rhsusf_m998_w_2dr_halftop {
        _generalMacro = "Cav_Charlie_m998_w_2dr_halftop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_w_2dr_f : rhsusf_m998_w_2dr {
        _generalMacro = "Cav_Charlie_m998_w_2dr_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_w_4dr_fulltop_f : rhsusf_m998_w_4dr_fulltop {
        _generalMacro = "Cav_Charlie_m998_w_4dr_fulltop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_w_4dr_halftop_f : rhsusf_m998_w_4dr_halftop {
        _generalMacro = "Cav_Charlie_m998_w_4dr_halftop_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m998_w_4dr_f : rhsusf_m998_w_4dr {
        _generalMacro = "Cav_Charlie_m998_w_4dr_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };
    class Cav_Charlie_m966_w_f : rhsusf_m966_w {
        _generalMacro = "Cav_Charlie_m966_w_f";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    
        ace_cargo_canLoad = 1;
        ace_cargo_size = 45;
    };


    class rhsusf_M1220_usarmy_d;
    class rhsusf_M1220_M153_M2_usarmy_d;
    class rhsusf_M1220_M2_usarmy_d;
    class rhsusf_M1220_MK19_usarmy_d;
    class rhsusf_M1230_M2_usarmy_d;
    class rhsusf_M1230_MK19_usarmy_d;
    class rhsusf_M1230a1_usarmy_d;
    class rhsusf_M1232_usarmy_d;
    class rhsusf_M1232_M2_usarmy_d;
    class rhsusf_M1232_MK19_usarmy_d;
    class rhsusf_M1237_M2_usarmy_d;
    class rhsusf_M1237_MK19_usarmy_d;

    class Cav_Charlie_M1220_usarmy_d : rhsusf_M1220_usarmy_d {
        _generalMacro = "Cav_Charlie_M1220_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1220_M153_M2_usarmy_d : rhsusf_M1220_M153_M2_usarmy_d {
        _generalMacro = "Cav_Charlie_M1220_M153_M2_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1220_M2_usarmy_d : rhsusf_M1220_M2_usarmy_d {
        _generalMacro = "Cav_Charlie_M1220_M2_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1220_MK19_usarmy_d : rhsusf_M1220_MK19_usarmy_d {
        _generalMacro = "Cav_Charlie_M1220_MK19_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1230_M2_usarmy_d : rhsusf_M1230_M2_usarmy_d {
        _generalMacro = "Cav_Charlie_M1230_M2_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1230_MK19_usarmy_d : rhsusf_M1230_MK19_usarmy_d {
        _generalMacro = "Cav_Charlie_M1230_MK19_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1230a1_usarmy_d : rhsusf_M1230a1_usarmy_d {
        _generalMacro = "Cav_Charlie_M1230a1_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1232_usarmy_d : rhsusf_M1232_usarmy_d {
        _generalMacro = "Cav_Charlie_M1232_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1232_M2_usarmy_d : rhsusf_M1232_M2_usarmy_d {
        _generalMacro = "Cav_Charlie_M1232_M2_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1232_MK19_usarmy_d : rhsusf_M1232_MK19_usarmy_d {
        _generalMacro = "Cav_Charlie_M1232_MK19_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1237_M2_usarmy_d : rhsusf_M1237_M2_usarmy_d {
        _generalMacro = "Cav_Charlie_M1237_M2_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1237_MK19_usarmy_d : rhsusf_M1237_MK19_usarmy_d {
        _generalMacro = "Cav_Charlie_M1237_MK19_usarmy_d";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_D";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };


    class rhsusf_M1220_usarmy_wd;
    class rhsusf_M1220_M153_M2_usarmy_wd;
    class rhsusf_M1220_M2_usarmy_wd;
    class rhsusf_M1220_MK19_usarmy_wd;
    class rhsusf_M1230_M2_usarmy_wd;
    class rhsusf_M1230_MK19_usarmy_wd;
    class rhsusf_M1230a1_usarmy_wd;
    class rhsusf_M1232_usarmy_wd;
    class rhsusf_M1232_M2_usarmy_wd;
    class rhsusf_M1232_MK19_usarmy_wd;
    class rhsusf_M1237_M2_usarmy_wd;
    class rhsusf_M1237_MK19_usarmy_wd;

    class Cav_Charlie_M1220_usarmy_wd : rhsusf_M1220_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1220_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1220_M153_M2_usarmy_wd : rhsusf_M1220_M153_M2_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1220_M153_M2_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1220_M2_usarmy_wd : rhsusf_M1220_M2_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1220_M2_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1220_MK19_usarmy_wd : rhsusf_M1220_MK19_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1220_MK19_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1230_M2_usarmy_wd : rhsusf_M1230_M2_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1230_M2_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1230_MK19_usarmy_wd : rhsusf_M1230_MK19_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1230_MK19_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1230a1_usarmy_wd : rhsusf_M1230a1_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1230a1_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1232_usarmy_wd : rhsusf_M1232_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1232_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1232_M2_usarmy_wd : rhsusf_M1232_M2_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1232_M2_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1232_MK19_usarmy_wd : rhsusf_M1232_MK19_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1232_MK19_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1237_M2_usarmy_wd : rhsusf_M1237_M2_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1237_M2_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };
    class Cav_Charlie_M1237_MK19_usarmy_wd : rhsusf_M1237_MK19_usarmy_wd {
        _generalMacro = "Cav_Charlie_M1237_MK19_usarmy_wd";
        scope = 2;
        scopeCurator = 2;
        author = ECSTRING(Main,CavModTeam);
        editorSubcategory = "Cav_EdSubcat_Vehicles_Charlie_W";

        side = 1;
        faction = "BLU_USA_7CAV_F";

        MACRO_VEH_CARGO;
        MACRO_VEH_CAR_CREW;
    };

};