#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int die_roll(int dieNum, int dieMax){
	int dieMin = 1;
	int k = 0;
    int total = 0;
	srand(time(NULL));
	for (k=0; k<dieNum; k++){
        total +=(rand()%(dieMax-dieMin+1) + dieMin);
	}
return total;
}
