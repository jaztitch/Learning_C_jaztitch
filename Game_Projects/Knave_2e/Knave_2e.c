#include <stdio.h>
#include <string.h>

int main(){
	
char *desHere[] = {"gold", "adventure", "food", "glory", "shelter", "safety", 0};

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

printf("\"Hello, new friend. What is your name?\"\nYou tell them your name: ");
fgets(playerName, sizeof(playerName), stdin);
playerName[strlen(playerName)-1]='\0';

printf("Welcome to the land of Teirthos, %s\n", playerName);
printf("What brings you to these lands?\nYou state what you\'ve come to Teirthos for: ");
fgets(playerDesire, sizeof(playerDesire),stdin);
playerDesire[strlen(playerDesire)-1]='\0';

while(desHere[i]){
	if(strcmp(desHere[i], playerDesire) == 0) {
	printf("Ah, there is much %s to be found in these lands.", playerDesire);
	break;
}
else{
	printf("I think you may disappointed with what you find here.");
	break;
}
}

    return 0;
}
