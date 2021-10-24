//===========================================================================
//
// Name:		keyboy_c.c
// Function:		Dmitri "Zindahsh" Kolesnikov (zindahsh@hotmail.com)
// Last update:		4.01.1999 (v0.91)
// Tab Size:		3 (real tabs)
//===========================================================================

#include "ichat.h"

chat "keyboy"
{
	#include "teamplay.h"
	//
	type "enter_game"
	{
		HELLO2
		HELLO3
		HELLO4
	} //end type
	type "exit_game"
	{
		GOODBYE1
		GOODBYE3
		GOODBYE5
	} //end type
	type "start_level"
	{
		STARTLEVEL
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
		DEATH_INSULT5
	} //end type
	type "death_praise"
	{
		D_PRAISE
	} //end type
	type "kill_insult"
	{
		KILL_INSULT34
		KILL_INSULT35
		KILL_INSULT36
	} //end type
	type "kill_praise"
	{
		PRAISE
	} //end type
	type "kill_telefrag"
	{
		TELEFRAGGED
		TELEFRAGGED1
		TELEFRAGGED2
		TELEFRAGGED6
	} //end type
	type "random_insult"
	{
		TAUNT
		TAUNT3
		TAUNT7
	} //end type
	type "random_misc"
	{
		"Now you've got serious problem, and i'm that problem!";
		"Sucker!!! You will die!";
		"What the fuck???";
		"You big piece of shit!";
		"Get out here!!! Buster!!! I see you in Hell!!!";
		"You are the ASS of a big ill Elephant! And i don't like it!";
		"Stop you motherfucker! I'm not finished yet!";
		MISC11
		MISC13
		MISC15
		MISC9
	} //end type
} //end chat kboy
