#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main(){

    srand(time(NULL));

    printf("Hello.\n");
    sleep(1);
    printf("My name is HAL9000.\n");
    sleep(1);
    printf("Let\'s play a game.\n");
    sleep(1);
    printf("How about");
    sleep(.25);
    printf(".");
    sleep(.25);
    printf(".");
    sleep(.25);
    printf(".\n");
    sleep(1);
    printf("Rock Paper Scissors\n");
    sleep(1);

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice){
        case 1:
        printf("You chose Rock\n");
        break;
        case 2:
        printf("You chose Paper\n");
        break;
        case 3:
        printf("You chose Scissors\n");
        break;
    }
    sleep(1);
    switch(computerChoice){
        case 1:
        printf("I chose Rock\n");
        break;
        case 2:
        printf("I chose Paper\n");
        break;
        case 3:
        printf("I chose Scissors\n");
        break;
    }
    sleep(1);
    checkWinner(userChoice,computerChoice);


    return 0;
}

int getComputerChoice(){
    return (rand() %3)+1;
}
int getUserChoice(){

    int choice = 0;

    do
    {
        printf("Choose an option:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    } while(choice <1 || choice >3);

    return choice;
    
}
void checkWinner(int userChoice, int computerChoice){
    if((userChoice == computerChoice)){
        printf("It\'s a tie!");
    }
    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 1 && computerChoice == 3) ||
            (userChoice == 3 && computerChoice == 2)){
        printf("You Win!");
    }
    else{
        printf("You Lose!");
    }
}