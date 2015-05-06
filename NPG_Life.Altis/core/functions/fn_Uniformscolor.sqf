#include <macro.h>
/*
	COP UNIFORM SCRIPT
	Author: coldgas (http://altis.newhopeoutfit.de)
	Created for www.altisliferpg.com
*/
#define FETCH_CONST(var) (call var)

if(side player == independent) then {
	if ((uniform player) == "U_B_CombatUniform_mcam") then {
		player setObjectTextureGlobal [0, "textures\medic\medic_uniform.paa"];
	};
	
	if (backpack player == "B_Carryall_cbr") then {
		backpackContainer player setObjectTextureGlobal [0, "textures\medic\mediccarryall.paa"];
	};
};
if(side player == WEST) then {
	//PCSO
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 1)) then { 
		player setObjectTextureGlobal [0, "textures\police\pcso_uniform.paa"];
	};
	// Basic cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 2 OR FETCH_CONST(life_coplevel) == 3)) then {
		player setObjectTextureGlobal [0, "textures\police\police_low.paa"]; 
	};
	// Basic cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 4 OR FETCH_CONST(life_coplevel) == 5 OR FETCH_CONST(life_coplevel) == 6 OR FETCH_CONST(life_coplevel) == 7)) then {
		player setObjectTextureGlobal [0, "textures\police\police_high.paa"]; 
	};
	// Basic cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 8 OR FETCH_CONST(life_coplevel) == 9 OR FETCH_CONST(life_coplevel) == 10 OR FETCH_CONST(life_coplevel) == 11 OR FETCH_CONST(life_coplevel) == 12)) then {
		player setObjectTextureGlobal [0, "textures\police\police_high.paa"]; 
	};
	// SCO cop uniform.
	if (uniform player == "U_B_CombatUniform_mcam" && (FETCH_CONST(life_coplevel) == 13)) then {
		player setObjectTextureGlobal [0, "textures\police\sco19.paa"]; 
	};
	if (backpack player == "B_Carryall_khk") then {
		backpackContainer player setObjectTextureGlobal [0, ""];
	};
};
if(side player == civilian) then {
	// Prisoner 
	if(side player == civilian && uniform player == "U_B_CombatUniform_mcam") then {
	player setObjectTextureGlobal [0, "textures\civilians\prisoner.paa"];
	};
	// Black wolf
	if(side player == civilian && uniform player == "U_B_CombatUniform_mcam_vest") then {
	player setObjectTextureGlobal [0, "textures\civilians\blackwolf.jpg"];
	};
	// CIV CLOTHING TEXTURES
	// elmo
	if(side player == civilian && uniform player == "U_C_Poloshirt_blue") then {
	player setObjectTextureGlobal [0, "textures\civilians\Student.paa"];
	};
	// kermit
	if(side player == civilian && uniform player == "U_C_Poloshirt_burgundy") then {
	player setObjectTextureGlobal [0, "textures\civilians\cookie.paa"];
	};
	// mario
	if(side player == civilian && uniform player == "U_C_Poloshirt_stripped") then {
	player setObjectTextureGlobal [0, "textures\civilians\mario.paa"];
	};
	// meg
	if(side player == civilian && uniform player == "U_C_Poloshirt_tricolour") then {
	player setObjectTextureGlobal [0, "textures\civilians\meg.paa"];
	};
	// pinapple
	if(side player == civilian && uniform player == "U_C_Poloshirt_salmon") then {
	player setObjectTextureGlobal [0, "textures\civilians\pinapple.paa"];
	};
	// yoda
	if(side player == civilian && uniform player == "U_C_Poloshirt_redwhite") then {
	player setObjectTextureGlobal [0, "textures\civilians\yoda.paa"];
	};
	// zoidberg
	if(side player == civilian && uniform player == "U_C_Commoner1_1") then {
	player setObjectTextureGlobal [0, "textures\civilians\zoidberg.paa"];
	};
};