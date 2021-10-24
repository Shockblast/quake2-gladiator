//===========================================================================
//
// Name:				lotus_c.c
// Function:
// Programmer:		Blair Williams
// Last update:	1999-04-10 (by Blair)
// Tab Size:		3 (real tabs)
//===========================================================================

#include "ichat.h"

chat "lotus"
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
		"don't leave me here all by myself"; 
	} //end type
	type "start_level"
	{
		STARTLEVEL2
		"Welcome";
	} //end type
	type "end_level"
	{
		ENDLEVEL2
		"here we go again";
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
		"damn";
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
		"shot";
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
		
	} //end type
	type "random_misc"
	{
		MISC8
		MISC9
		MISC10
		MISC11
		
	} //end type
} //end chat lotus
