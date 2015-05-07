class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "" }, 
			{ "C_Hatchback_01_F", 7000, "driver" }, 
			{ "C_Offroad_01_F", 14000, "driver" },
			{ "C_SUV_01_F", 30000, "driver" },
			{ "C_Hatchback_01_sport_F", 75000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 25000 , "driver" },
			{ "C_Kart_01_Fuel_F", 25000, "driver" },
			{ "C_Kart_01_Red_F", 25000, "driver" },
			{ "C_Kart_01_Vrana_F", 25000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Hatchback_01_sport_F", 0, "", { "life_mediclevel", 2 } },
			{ "C_SUV_01_F", 0, "" },
			{ "C_Van_01_box_F", 0, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "O_Heli_Light_02_unarmed_F", 0, "mAir", { "life_mediclevel", 2 } },
			{ "O_Heli_Transport_04_medevac_black_F", 0, "mAir", { "life_mediclevel", 3 } },
			{ "B_Heli_Light_01_F", 0, "mAir", { "life_mediclevel", 2 } },
			{ "B_Heli_Transport_03_unarmed_F", 0, "mAir", { "life_mediclevel", 6 } },
			{ "I_Heli_light_03_unarmed_F", 0, "mAir", { "life_mediclevel", 3 } }

		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_transport_F", 30000, "trucking" },
			{ "C_Van_01_box_F", 45000, "trucking" },
			{ "I_Truck_02_transport_F", 100000, "trucking" },
			{ "I_Truck_02_covered_F", 120000, "trucking" },
			{ "O_Truck_03_transport_F", 200000, "trucking" },
			{ "O_Truck_03_covered_F", 225000, "trucking" },
			{ "B_Truck_01_transport_F", 400000, "trucking" },
			{ "B_Truck_01_box_F", 550000, "trucking" },
			{ "B_Truck_01_covered_F", 400000, "trucking" },
			{ "B_Truck_01_mover_F", 300000, "trucking" },
			{ "O_Truck_03_device_F", 450000, "trucking" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "" },
			{ "I_G_Offroad_01_F", 14000, "" },
			{ "C_Van_01_transport_F", 30000, "trucking" },
			{ "C_Van_01_box_F", 45000, "trucking" },
			{ "I_Truck_02_transport_F", 100000, "trucking" },
			{ "I_Truck_02_covered_F", 120000, "trucking" },
			{ "O_Truck_03_transport_F", 200000, "trucking" },
			{ "O_Truck_03_covered_F", 225000, "trucking" },
			{ "B_Truck_01_transport_F", 400000, "trucking" },
			{ "B_Truck_01_box_F", 550000, "trucking" },
			{ "B_Truck_01_covered_F", 400000, "trucking" },
			{ "B_Truck_01_mover_F", 300000, "trucking" },
			{ "O_Truck_03_device_F", 450000, "trucking" },
			{ "O_MRAP_02_F", 1000000, "" },
			{ "B_G_Offroad_01_armed_F", 750000, "" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "C_Hatchback_01_F", 0, "", { "life_coplevel", 2} },
			{ "C_Offroad_01_F", 0, "", { "life_coplevel", 4} },
			{ "C_SUV_01_F", 0, "", { "life_coplevel", 3} },
			{ "C_Hatchback_01_sport_F", 0, "", { "life_coplevel", 3} },
			{ "B_MRAP_01_F", 0, "", { "life_coplevel", 5} },
			{ "I_Truck_02_covered_F", 0, "", {"life_coplevel", 4} }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 200000, "pilot" },
			{ "B_Heli_Transport_01_F", 750000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 1250000, "pilot" },
			{ "I_Heli_Transport_02_F", 1500000, "pilot" },
			{ "I_Heli_light_03_unarmed_F", 2000000, "pilot" },
			{ "B_Heli_Transport_03_unarmed_F", 8000000, "pilot" },
			{ "O_Heli_Transport_04_covered_F", 8000000, "pilot" },
			{ "I_Plane_Fighter_03_AA_F", 10000000, "pilot" },
			{ "O_Plane_CAS_02_F", 15000000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 0, "cAir" },
			{ "I_Heli_light_03_unarmed_F", 0, "cAir" },
			{ "B_Heli_Transport_01_F", 0, "cAir" }	
		};
	};

	class cop_airhq {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 0, "cAir" },
			{ "I_Heli_light_03_unarmed_F", 0, "cAir" },
			{ "B_Heli_Transport_01_F", 0, "cAir" }	
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 0, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 0, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 0, "coastguard" },
			{ "B_SDV_01_F", 0, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 50000, "boat" }
		};
	};
	
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};
	
	class I_Heli_light_03_F : Default {
		vItemSpace = 100;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 10000, 10000, 10000, 0 };
		chopShop = 10000;
	};
	
	class B_SDV_01_F : Default {
		vItemSpace = 100;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 10000, 10000, 10000, 0 };
		chopShop = 10000;
	};
	
	class I_G_Offroad_01_F : Default {
		vItemSpace = 65;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 10000, 10000, 10000, 0 };
		chopShop = 10000;
	};
	
	class Land_Wreck_Traw_F : Default {
		vItemSpace = 100000000;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 105000, 105000, 105000, 0 };
		chopShop = 105000;
	};
	
	class Land_Wreck_Traw2_F : Default {
		vItemSpace = 100000000;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 105000, 105000, 105000, 0 };
		chopShop = 105000;
	};

	class B_Truck_01_mover_F : Default {
		vItemSpace = 10;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 105000, 105000, 105000, 0 };
		chopShop = 105000;
	};
	
	class O_Plane_CAS_02_F : Default {
		vItemSpace = 10;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 7000000, 7000000, 7000000, 0 };
		chopShop = 7000000;
	};
	
	class I_Plane_Fighter_03_AA_F : Default {
		vItemSpace = 10;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 7000000, 7000000, 7000000, 0 };
		chopShop = 7000000;
	};
	
	class B_Truck_01_covered_F : Default {
		vItemSpace = 10;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 140000, 140000, 140000, 0 };
		chopShop = 140000;
	};
	
	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 20000, 20000, 20000, 0 };
		chopShop = 20000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 262500, 262500, 262500, 0 };
		insurance = 16000;
		chopShop = 262500;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0};
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 700000, 700000, 700000, 0 };
        insurance = 2500;
        chopShop = 700000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 550;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 70000, 70000, 70000, 70000 };
        insurance = 2500;
        chopShop = 70000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 157500, 157500, 157500, 0 };
        insurance = 25000;
        chopShop = 157500;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 400;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
	
	class O_Heli_Transport_04_covered_F {
        vItemSpace = 400;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 800;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 192000, 192000, 192000, 0 };
        insurance = 2500;
        chopShop = 192000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 700;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 140000, 140000, 140000, 0 };
        insurance = 2500;
        chopShop = 140000;
        textures[] = { };
    };
	
	class O_Heli_Transport_04_medevac_F {
        vItemSpace = 325;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 0;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 350000, 350000, 350000, 0 };
        insurance = 2500;
        chopShop = 350000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };


	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 4900, 4900, 4900, 0 };
        insurance = 2500;
        chopShop = 4900;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
			{ "Police", "cop", {
	                "textures\police\lincpol_offroader.paa"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 8750, 8750, 8750, 0 };
		inusrance = 1650;
		chopShop = 8750;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 26250, 26250, 0, 0 };
        insurance = 5500;
        chopShop = 26250;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "textures\police\cop_hatchback.paa"
            } },
            { "Police2", "cop", {
                "textures\police\lincpol_hbsport.paa"
            } },
			{ "NHS", "med", {
                "textures\medic\sport_med.paa"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 1750, 1750, 1750, 0 };
        insurance = 2500;
        chopShop = 1750;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 42000, 42000, 42000, 0 };
        insurance = 6500;
        chopShop = 42000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "textures\police\scotpol_Zamac_Cab.paa","textures\police\scotpol_Zamac_Back.paa"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 450;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 35000, 35000, 35000, 0 };
		chopShop = 35000;
    };

	class O_Truck_03_covered_F {
		vItemSpace = 600;
		storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 78750, 78750, 78750, 0 };
		insurance = 2500;
		chopShop = 78750;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 2450, 2450, 2450, 0 };
        insurance = 2500;
        chopShop = 2450;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
			{ "Cop", "cop", {
	                "textures\police\lincpol_hb.paa"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 10500, 10500, 10500, 0 };
        insurance = 2500;
        chopShop = 10500;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "textures\police\police_suv.paa"
            } },
			{ "ANPR #1", "cop", {
                "textures\police\lincpol_suv_anpr_b.paa"
            } },
			{ "ANPR #2", "cop", {
                "textures\police\lincpol_suv_anpr_db.paa"
            } },
			{ "Undercover ONLY", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
			{ "NHS", "med", {
                "textures\medic\suv_medic.paa"
            } }
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 10500, 10500, 10500, 0 };
        insurance = 2500;
        chopShop = 10500;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 15750, 15750, 15750, 0 };
        insurance = 2500;
        chopShop = 15750;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
			{ "NHS", "med", {
                "textures\medic\front_med.paa","textures\medic\back_med.paa"
            } }
        };
    };
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 500000;
        textures[] = {
        	{ "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 70000, 70000, 70000, 0 };
        insurance = 2500;
        chopShop = 70000;
        textures[] = {
			{ "Black", "cop", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 190;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 437500, 437500, 437500, 0 };
        insurance = 2500;
        chopShop = 437500;
        textures[] = {
        	{ "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "NHS", "med", {
                "textures\medic\orca_med.paa"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 280;
        storageFee[] = { 0, 0, 0, 0 };
		garageSell[] = { 550000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 550000;
        textures[] = {
        	{ "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
};