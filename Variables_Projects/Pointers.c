#include <stdio.h>

void birthday(int* age);

int main(){

    int age=34;
    int *pAge=&age;

    birthday(pAge);
    printf("you are %d years old", age);

    return 0;
}

void birthday(int* age){
    (*age)++;
}