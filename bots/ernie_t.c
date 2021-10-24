//===========================================================================
//
// Name:				ernie_c.c
// Function:
// Programmer:		Felix
// Last update:	1999-03-27 (by Felix)
// Tab Size:		3 (real tabs)
//===========================================================================

#include "ichat.h"

chat "Ernie"
{
	#include "teamplay.h"
	//
	type "enter_game"
	{
		HELLO3
		HELLO5
		HELLO7
	} //end type
	type "exit_game"
	{
		GOODBYE1
		GOODBYE3
		GOODBYE5
	} //end type
	type "start_level"
	{
		STARTLEVEL2
	} //end type
	type "end_level"
	{
		ENDLEVEL2
	} //end type
	type "death_bfg"
	{
		DEATH_BFG
		DEATH_BFG1
		DEATH_BFG2
	} //end type
	type "death_insult"
	{
		DEATH_INSULT2
	} //end type
	type "death_praise"
	{
		D_PRAISE
	} //end type
	type "kill_insult"
	{
		KILL_INSULT22
		KILL_INSULT23
		KILL_INSULT24
	} //end type
	type "kill_praise"
	{
		PRAISE3
	} //end type
	type "kill_telefrag"
	{
		TELEFRAGGED
		TELEFRAGGED3
	} //end type
	type "random_insult"
	{
		TAUNT2
		TAUNT6
		TAUNT7
		"did you forget to flush the toilet ", 1, "?";
		"your not good enough for my army of zombies, punk";
	} //end type
	type "random_misc"
	{
		MISC8
		MISC9
		MISC10
		MISC11
		"how about Resident Evil for a change?";
		"still alive? I will solve that for you =)";
		"anyone like chastity?";
		"anybody seen my latest comic?";
		"I do it for love";
		"my skin is wrinkled";
		"who wants to be given eternal zombieness?";
		"Lady Death, where are you baby?";
	} //end type
} //end chat Ernie
