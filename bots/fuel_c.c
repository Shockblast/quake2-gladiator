//===========================================================================
//
// Name:				fuel_c.c
// Function:
// Programmer:		Felix
// Last update:	1999-04-05
// Tab Size:		3 (real tabs)
//===========================================================================

#include "chars.h"

character "fuel"
{
	CHARACTERISTIC_NAME				"Fuel 4.46"
	CHARACTERISTIC_ALT_NAME				"Fuel"
	CHARACTERISTIC_GENDER				"cyborg"
	CHARACTERISTIC_ATTACK_SKILL			0.60
	CHARACTERISTIC_WEAPONWEIGHTS			"bots/mean_w.c"
//	CHARACTERISTIC_WEAPONWEIGHTS			"bots/fuel_w.c"
	CHARACTERISTIC_WEAPONSWITCHER			0.7
	CHARACTERISTIC_AIM_SKILL			0.7
	CHARACTERISTIC_AIM_ACCURACY			0.7
	CHARACTERISTIC_VIEW_ACCELERATION		400
	CHARACTERISTIC_VIEW_DEACCELERATION		400
	CHARACTERISTIC_REACTIONTIME			0.95
	//
	CHARACTERISTIC_CHAT_FILE			"bots/fuel_t.c"
	CHARACTERISTIC_CHAT_NAME			"Fuel"
	CHARACTERISTIC_CHAT_CPM				1200
	CHARACTERISTIC_CHAT_REPLY			0.65
	CHARACTERISTIC_CHAT_DEATH			0.99
	CHARACTERISTIC_CHAT_ENTEREXITGAME		0.99
	CHARACTERISTIC_CHAT_INSULT			0.75
	CHARACTERISTIC_CHAT_KILL			0.99
	CHARACTERISTIC_CHAT_MISC			0.75
	CHARACTERISTIC_CHAT_STARTENDLEVEL		0.99
	CHARACTERISTIC_CHAT_RANDOM			0.75
	//
	CHARACTERISTIC_CROUCHER				0.75
	CHARACTERISTIC_JUMPER				0.66
	CHARACTERISTIC_WEAPONJUMPING			0.85
	CHARACTERISTIC_GRAPPLE_USER			0.85
	//
	CHARACTERISTIC_ITEMWEIGHTS			"bots/items_i.c"
//	CHARACTERISTIC_ITEMWEIGHTS			"bots/fuel_i.c"
	CHARACTERISTIC_HEALTHGATHERER			0.75
	CHARACTERISTIC_ARMORGATHERER			0.75
	CHARACTERISTIC_TELEFRAGAWARE			0.8
	CHARACTERISTIC_AGGRESSION			0.6
	CHARACTERISTIC_FEAR				0.25
	CHARACTERISTIC_SELFPRESERVATION			0.5
	CHARACTERISTIC_VENGEFULNESS			0.25
	CHARACTERISTIC_CAMPER				0.5
	CHARACTERISTIC_EGO				0.7
	//
	CHARACTERISTIC_FAVCLASS				0
	CHARACTERISTIC_SKIN_SWITCHER			0.01
	CHARACTERISTIC_NAME_SWITCHER			0.01
	CHARACTERISTIC_FRUSTRATEDTEEN			0
	CHARACTERISTIC_FRUSTRATEDNESS			0
	CHARACTERISTIC_EASY_FRAGGER			0.2
	CHARACTERISTIC_ALERTNESS			0.5
	CHARACTERISTIC_SOUNDTYPE			1
	CHARACTERISTIC_3DACCELERATOR			1
	CHARACTERISTIC_CONTROLTYPE			1
	CHARACTERISTIC_TEAMSPIRIT			1
	CHARACTERISTIC_PIZZAPREFERENCE			0
	CHARACTERISTIC_CALL_PRONE			0
	CHARACTERISTIC_BEDDY_BYE_TIME			0
	CHARACTERISTIC_EYE_COR_DEVICE			0
	CHARACTERISTIC_GAMMA_CORRECTION			0
	CHARACTERISTIC_BUTTKISSER			0
} //end character fuel


