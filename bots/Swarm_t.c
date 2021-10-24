//  Swarm

#include "ichat.h"

chat "Swarm"
{
	type "enter_game"
	{
		HELLO6
		HELLO7
		HELLO2
	} //end type
	type "exit_game"
	{
		GOODBYE4
		GOODBYE5
		GOODBYE2
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
		DEATH_INSULT3
		DEATH_FEM_INSULT
	} //end type
	type "death_praise"
	{
		D_PRAISE
	} //end type
	type "kill_insult"
	{
		KILL_INSULT6
		KILL_INSULT7
		KILL_INSULT8
		"Yaawwnnn....";
		"Sorry...Did that hurt?  :)";
		"Ooops... it just went off in my hands!";
		"Don't bleed so much.  It's a mess!";
	} //end type
	type "kill_praise"
	{
		"Could you move a bit faster...I need the practice.";
		PRAISE3
	} //end type
	type "kill_telefrag"
	{
		"Urgh ", 0, ", I stepped on some shit. :(";
		TELEFRAGGED6
		TELEFRAGGED5
	} //end type
	type "random_insult"
	{
		TAUNT5
		TAUNT6
		TAUNT8
		TAUNT_FEM
		TAUNT_FEM1
		TAUNT_FEM2
		TAUNT_FEM3
		TAUNT_FEM4
		TAUNT_FEM5
		TAUNT_FEM6
		TAUNT_FEM7
	} //end type
	type "random_misc"
	{
		"If this was Doom2 I'd really make you scream...";
		"Do you want me to just use the blaster?";
		"I'm getting bored...Try committing suicide for a bit...";
		"Suck my shotgun!";
		MISC10
		MISC3
		MISC15
		"I dunno...can't find any decent oponents these days...sigh";
		"I miss Doom2...Did you ever play Swarmdmx?";
		"Try not to scream so loud, I've a hangover...";
	} //end type
} //end chat
