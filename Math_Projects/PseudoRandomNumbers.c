#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));

    int min = 1;
    int max = 100;

    int randomNum = (rand()% (max - min + 1)) + min;

    printf("%d", randomNum);

    return 0;
}