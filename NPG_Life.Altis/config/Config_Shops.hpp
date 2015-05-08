class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_TRG20_F", "", 25000 },
            { "arifle_MXC_F", "", 30000 },
            { "arifle_MX_F", "", 50000 },
            { "arifle_MXM_F", "", 20000 },
			{ "arifle_MX_SW_F", "", 20000 },
			{ "LMG_Mk200_F", "", 20000 },
			{ "srifle_DMR_06_camo_F", "", 20000 },
			{ "srifle_EBR_F", "", 20000 },
			{ "srifle_DMR_03_F", "", 20000 },
            { "optic_Aco", "", 3500 },
            { "optic_Aco_grn", "", 3600 },
			{ "acc_flashlight", "", 1000 },
			{ "optic_Holosight", "", 1000 },
			{ "optic_Hamr", "", 1000 },
			{ "optic_Arco", "", 1000 },
			{ "optic_MRCO", "", 1000 },
			{ "optic_DMS", "", 1000 },
            { "30Rnd_556x45_Stanag", "", 200 },
            { "30Rnd_65x39_caseless_mag", "", 125 },
            { "100Rnd_65x39_caseless_mag", "", 300 },
			{ "200Rnd_65x39_cased_Box", "", 500 },
			{ "20Rnd_762x51_Mag", "", 500 }
        };
    };
    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Police Equipment";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{"Binocular","Binocular",0},
			{"Rangefinder","RangeFinder",0},
			{"ItemGPS",nil,0},
			{"ToolKit",nil,0},
			{"FirstAidKit",nil,0},
			{"Medikit",nil,0},
			{"NVGoggles",nil,0},
			{"NVGoggles_OPFOR",nil,0},
			{"Chemlight_red",nil,0},
			{"Chemlight_yellow",nil,0},
			{"Chemlight_blue",nil,0}
        };
    };
    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level = 2;
        msg = "You must be a Patrol Officer Rank!";
        items[] = {
			{ "arifle_MX_Black_F", "", 0 },
			{ "arifle_MXC_Black_F", "", 0 },
			{ "arifle_MXM_Black_F", "", 0 },
			{ "SMG_02_ACO_F", "", 0 },
			{ "HandGrenade_Stone", "Flashbang", 0 },
			{ "acc_flashlight", "", 0 },
			{ "optic_Holosight", "", 0 },
			{ "optic_Arco", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 }
        };
    };
    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level = 3;
        msg = "You must be a Sergeant Rank!";
        items[] = {
            { "SMG_02_ACO_F", "", 0 },
			{ "hgun_ACPC2_F", "", 0 },
			{ "HandGrenade_Stone", "Flashbang", 0 },
			{ "arifle_MXC_F", "", 0 },
			{ "optic_Arco", "", 0 },
			{ "muzzle_snds_H", "", 0 },
			{ "30Rnd_65x39_caseless_mag", "", 0 },
			{ "30Rnd_9x21_Mag", "", 0 },
			{ "9Rnd_45ACP_Mag", "", 0 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 0 },
			{ "Binocular", "", 0 },
			{ "ToolKit", "", 0 },
			{ "FirstAidKit", "", 0 },
			{ "Medikit", "", 0 },
			{ "NVGoggles", "", 0 },
			{ "B_FieldPack_ocamo", "", 0 }
        };
    };
};
