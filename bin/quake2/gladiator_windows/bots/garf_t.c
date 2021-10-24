//===========================================================================
//
// Name:				garf_c.c
// Function:
// Programmer:		Blair Williams
// Last update:	1999-04-10 (by Blair)
// Tab Size:		3 (real tabs)
//===========================================================================

#include "ichat.h"

chat "garF"
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
		"i will kill you ", 0, " with my blaster";
		"you should move faster";
		"i am going to Kick your ass all the way to Quake 4";
		"you had better go back to Wolfenstein3D";
		"you couldn't kill me even if you tried";
		"i shall blow you up like the doll you are";
		"prepare to eat my rockets";
		"ooh you are so chunky";
		"i can beat you anywhere, anytime";
		"you suck so much you should change your name to Straw";
		"you are so good at killing yourself";
		"you have won the award for most kills, NOT";
		"you look like you need a blow job, here let me help";
		"why do you insist on playing me?";
		"i shall win again and again";
		"are you ready to die ?";
		"dont you hate it when you play this game pissed and you still win";
		"i am just standing here and im still winning";
		"Damn Campers";
		"whos the DADDY";
		"i am going to go to every single one of your funerals :P";
	} //end type
	type "random_misc"
	{
		MISC8
		MISC9
		MISC10
		MISC11
		"what the hell are you doing?";
		"i am a Chameleon";
		"you had better stop playing before you get hurt :)";
		"why must you play so Badly?";
		"i want some money for playing you!";
		"ooh ive been hit";
		"i could be the Best you know, hang on i am the best";
		"im coming for you";
		"Roses are Red, Violets are Blue, Im going to SHIT all over you";
		"beam me up ", 0, "?";
		"email my creator at bw65@hotmail.com NOW or i will keep killing you";
		"just wait til I get my Flamethrower";
		"you must die";
		"freedom, finally i am free from killing you all day";
		"more meat for me";
		"i am Good, so Good in fact i dont even have to move to win";
		"too bad if im not supposed to be plugging anything";
		"i am so bored i might just stand here and play with myself";
		"i say are you cheating";
		"you had better not be cheating";
		"i needed that";
		"My name is garF and i will bring you DEATH";
		"i dont know what i am doing here";
		"if you have some good messages for me to put in here email me";
		"whats the matter with you";
		"hey whats that for";
		"you arent very talkative today";
		"stop hiding you prick";
		"why must i endure this suffering";
		"learn from the best";
		"i will teach you a thing or two";
		"come out, come out from where ever you are";
		"i love to kill Campers";
		"oh shit i dropped my gun";
		"ahh found you";
		"do you want me ?";
		"you are really weird";
		"i dont feel pain";
		"are you addicted to Quake 2 ?";
		"i will give you some advice on how to play";
		"dont be afraid";
		"you must accept defeat";
		"i am quite pissed";
		"you should be ashamed of yourself";
		"lets go to the bar";
		"i need a beer";
		"are you as stoned as me ?";
		"excuse me while i eat your brains";
		"piss off";
		"fuck off";
		"i am immortal";
		"dont panic";
		"what sex are you ?";
		"damn im good";
	} //end type
} //end chat garF
