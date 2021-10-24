//===========================================================================
//
// Name:				fuel_t.c
// Function:
// Programmer:		Felix
// Last update:	1999-04-05 (by Felix)
// Tab Size:		3 (real tabs)
//===========================================================================

#include "ichat.h"

chat "Fuel"
{
	#include "teamplay.h"
	//
	type "enter_game"
	{
		"Training unit Fuel 4.46 ready";
		"Fuel 4.46 assigned to training class ready";
	} //end type
	type "exit_game"
	{
		"Shutting down. . .";
		"Fuel reassigned to Scout squad, leaving training. . .";
	} //end type
	type "start_level"
	{
		"Warning, attack mode activated";
		"Processing training area. . . done";
	} //end type
	type "end_level"
	{
		"Training area completed";
	} //end type
	type "death_bfg"
	{
		"As you can see, the BFG9000 is highly effective while requiring little aim skill";
	} //end type
	type "death_insult"
	{
		"Good shot, ", 0;
	} //end type
	type "death_praise"
	{
		"Well done, ",0,", I will adjust your training difficulty";
	} //end type
	type "kill_insult"
	{
		"Perhaps we should lower the skill level for your training, ",0;
		"Do better next time, ",0;
	} //end type
	type "kill_praise"
	{
		"Good performance, ",0;
	} //end type
	type "kill_telefrag"
	{
		"Try to stay away from teleporter pods";
		"Avoid teleporter pods";
	} //end type
	type "random_insult"
	{
		"Try to attack,",0;
		"Attack me, trainee ",0;
	} //end type
	type "random_misc"
	{
		"tip of the day: superior armor can be the deciding advantage against your opponent";
		"tip of the day: if you see your enemy surrounded by a blue glow, run!";
		"tip of the day: use the railgun against non- or slow-moving targets";
		"tip of the day: try to find the backpack, because it allows you to carry more ammo";
		"tip of the day: the bandoleer allows you to carry more ammunition";
		"tip of the day: try to find yellow and/or red armor, as they're much more effective than the green armor";
		"tip of the day: you can use the repulsion of an exploding rocket to jump much higher than normally possible";
		"tip of the day: when you are wounded, try to find health packs, they will ease your pain";
		"tip of the day: always try to find a better weapon than the standard blaster";
		"tip of the day: don't use the hyperblaster in conjunction with the powershield";
		"tip of the day: for best results with the rocket launcher, try to aim at the feet of your target";
		"tip of the day: the super shotgun is best suited for close- to midrange combats";
	} //end type
} //end chat Fuel
