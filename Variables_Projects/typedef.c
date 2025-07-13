#include <stdio.h>

typedef char string[50];
typedef char Initials[3];

int main(){

    string name="jaztitch";

    Initials user1[] = "OM";
    Initials user2[] = "OW";
    Initials user3[] = "RW";
    Initials user4[] = "TN";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}