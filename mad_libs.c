#include <stdio.h>
#include <string.h>

int main() {

    //Mad Libs Game from Bro Code Youtube channel

    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1]='\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1]='\0';
    
    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1]='\0';

    printf("Enter a verb (Action) in present tense(-ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1]='\0';

    printf("Enter an emotion: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1]='\0';

    printf("You chose:\n %s, %s, %s, %s, %s.\n\n", noun, verb, adjective1, adjective2, adjective3);

    printf("My dad and I went out looking for a %s today. After searching long and hard, we finally found him. He was very %s. When we found him, he was %s another %s. The other %s was very %s. My dad was very %s.\n", noun, adjective1, verb, noun, noun, adjective2, adjective3);

    return 0;
}