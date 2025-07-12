#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "dieRoll.h"

int main(){
	
srand(time(NULL));
int randomNum = rand() %3;
	
char *maleFirstNames[] = {"Adam", "Thomas", "James", "William"};
char *femaleFirstNames[]={"Alice", "Sarah", "Tiffany", "Rose"};
char *nonbinaryFirstNames[]={"Rowan", "Avery", "Finley", "Ellis"};

char *malePronouns[]={"He", "Him", "His"};
char *femalePronouns[]={"She", "Her", "Hers"};
char *nonbinaryPronouns[]={"They", "Them", "Theirs"};
	
char *desHere[] = {"gold", "adventure", "food", "glory", "shelter", "safety", 0};
char *genders[] = {"male", "female", "nonbinary", 0};
char positiveReply[] = "yes";
char negativeReply[] = "no";

char reply[4]="";
char playerGender[10]="";
char playerPronouns[6]={};
char playerName[30]="";
char playerDesire[10]="";
int playerLevel = 0;
int playerExperience = 0;
int playerAbilityPoints = 0;
int playerOccupation1 = 0;
int playerOccupation2 = 0;
char playerDescription[400] ="";

int playerStr = 0;
int playerDex = 0;
int playerCon = 0;
int playerInt = 0;
int playerWis = 0;
int playerCha = 0;

int i = 0;
int j = 0;

printf("Please enter you gender. Options are: \n");
for(i = 0; i < 3; i++) {
	printf("%s ", genders[i]);
}
printf("\n");
scanf("%s", &playerGender);
while ((getchar()) != '\n'); 

i = 0;

while(genders[i]){
	if(strcmp(genders[i], playerGender) == 0){
		printf("Then you shall be recognized as a %s.\n", playerGender);
		break;
	}
	else{
		printf("My apologies, I don\'t believe I recognize that gender.\n");
		printf("Please enter a gender we recognize in these lands.\n");
		scanf("%s", &playerGender);
		while ((getchar()) != '\n');
		break;
	}	
}

	printf("Do you know your name?\n");
	scanf("%s", &reply);
while ((getchar()) != '\n');
	
	if (strcmp(reply, positiveReply) == 0){
		printf("Please tell me your name so that we may proceed.\n");
		fgets(playerName, sizeof(playerName), stdin);
		playerName[strlen(playerName)-1]='\0';
	}
	else if (strcmp(reply, negativeReply ) == 0 && strcmp(playerGender, genders[0] ) == 0){
		strcpy(playerName, maleFirstNames[randomNum]);
		printf("Then you will be known as %s.\n", playerName);
	}
	else if (strcmp(reply, negativeReply ) == 0 && strcmp(playerGender, genders[1] ) == 0){
		strcpy(playerName, femaleFirstNames[randomNum]);
		printf("Then you will be known as %s.\n", playerName);
	}
	else if (strcmp(reply, negativeReply ) == 0 && strcmp(playerGender, genders[2] ) == 0){
		strcpy(playerName, nonbinaryFirstNames[randomNum]);
		printf("Then you will be known as %s.\n", playerName);
	}

	sleep(1.5);

i = 0;

printf("Welcome to the land of Teirthos, %s\n", playerName);
sleep(1.5);
printf("What brings you to these lands?\nYou state what you\'ve come to Teirthos for: ");
fgets(playerDesire, sizeof(playerDesire),stdin);
playerDesire[strlen(playerDesire)-1]='\0';

while(desHere[i]){
	if(strcmp(desHere[i], playerDesire) == 0) {
	printf("Ah, there is much %s to be found in these lands.\n", playerDesire);
	break;
}
else{
	printf("I think you may disappointed with what you find here.\n");
	break;
}
}

printf("The land of Teirthos is full of many things, much of which may prove dangerous.\n");
sleep(1.5);
printf("It is a land of magic and mystery, with much to do and considerable history.\n");
sleep(1.5);

    return 0;
}
