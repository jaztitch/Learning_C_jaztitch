#include <stdio.h>

typedef enum{
    SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7
}Day;

int main(){

    Day today = SUNDAY;

    if(today == SUNDAY || today == SATURDAY){
        printf("It\'s the weekend");
    }
    else{
        printf("It\'s a weekday");
    }

    printf("%d\n",today);

    return 0;
}