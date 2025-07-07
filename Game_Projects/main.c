#include <stdio.h>
#include <string.h>

int main(){

char playerName[30];
char PlayerDesire[10];

printf("\"Hello, new friend. What is your name?\"\nYou tell them your name: ");
fgets(playerName, sizeof(playerName), stdin);
playerName[strlen(playerName)-1]='\0';

printf("Welcome to the land of Evelritha, %s\n", playerName);
printf("What brings you to these lands?\nYou state what you\'ve come to Evelritha for: ");

scanf("%s", &PlayerDesire);

printf("Ah, %s, there is much %s to be found here.\n", playerName, PlayerDesire);
    return 0;
}