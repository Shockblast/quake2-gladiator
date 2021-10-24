// Swarm


#include "inv.h"
#include "game.h"

//standard weapon weights
#define blaster						20
#define shotgun                  55
#define sshotgun						70
#define machinegun					65
#define chaingun						75
#define grenadelauncher				60
#define rocketlauncher				85
#define hyperblaster					80
#define railgun						90
#define BFG10K							95
#define grenades						50

//standard weight if the weapon will cause damage to self when used

#define self_dmg_grenades			20
#define self_dmg_grenadelauncher	20
#define self_dmg_rocketlauncher	55

//standard weight if the user had quad damage activated

#define quad_shotgun					60
#define quad_sshotgun				80
#define quad_machinegun				75
#define quad_chaingun				95
#define quad_grenadelauncher		40
#define quad_rocketlauncher		80
#define quad_hyperblaster			90
#define quad_railgun					20
#define quad_BFG10K					85

//standard weight if the user possesse a working powershield

#define pwrshield_hyperblaster	0
#define pwrshield_BFG10K			0

//weight if the user has invulnerability and a rocket launcher

#define invul_rocketlauncher		95

// next three are BFG only

#define add_invuln					0
#define add_quad						10
#define add_too_close				-30



#include "fw_weap.c"
