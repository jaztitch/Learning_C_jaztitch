#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;

    int answer = (rand() % (max - min+1)) + 1;

    printf("Guess the correct number!\n");

    do{
        printf("Guess a number between %d - %d: ",min,max);
        scanf("%d",&guess);
        tries++;

        if(guess < answer){
            printf("Too Low!\n");
        }
        else if(guess>answer){
            printf("Too High!\n");
        }
        else{
            printf("Correct!\n");
        }

    }while(guess != answer);

    printf("The answer is %d\n", answer);
    printf("It took you %d tries\n", tries);

    return 0;
}