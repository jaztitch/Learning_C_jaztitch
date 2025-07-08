#include <stdio.h>
#include <string.h>

int main(){

    /*Intended to eventually be a text-based implementation of Oliver Fradgley's "Fantasy Open Roleplaying Game Engine(F.O.R.G.E)" V1.1
    set in a homebrewed world titled "Teirthos".*/

char playerName[30];
char playerDesire[10];
int playerLevel = 0;
int playerExperience = 0;
int playerAbilityPoints = 0;
int playerStr = 0;
int playerOccupation1 = 0;
int playerOccupation2 = 0;
int playerPersonality = 0;
int playerPhysicalAppearance = 0;
int playerNotableDetail = 0;
int playerClothing = 0;
int playerQuirk = 0;
int playerAlignment = 0;
int playerDex = 0;
int playerCon = 0;
int playerInt = 0;
int playerWis = 0;
int playerCha = 0;

printf("\"Hello, new friend. What is your name?\"\nYou tell them your name: ");
fgets(playerName, sizeof(playerName), stdin);
playerName[strlen(playerName)-1]='\0';

printf("Welcome to the land of Teirthos, %s\n", playerName);
printf("What brings you to these lands?\nYou state what you\'ve come to Teirthos for: ");

scanf("%s", &playerDesire);

printf("Ah, %s, there is much %s to be found here.\n", playerName, playerDesire);

    return 0;
}