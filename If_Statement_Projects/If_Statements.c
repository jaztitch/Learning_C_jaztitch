#include <stdio.h>

int main(){

    int age = 0;

    printf("Enter your age: \n");
    scanf("%d", &age);

    if(age >= 18 && age < 150){
        printf("You are an adult.\n");
    }
    else if(age >= 150){
        printf("Are you immortal?\n");
    }
    else if (age < 0){
        printf("You haven't been born yet.\n");
    }
    else{
        printf("You are NOT an adult.\n");
    }

    return 0;
}