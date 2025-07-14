#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main(){
	
	/*Digital Clock Project*/
	
	time_t rawtime = 0; /*time_t is defined from the ISO C library, values are usually returned from the standard time() function
	it is defined in the standard header. defined as an arithmetic type, inplemented as a signed integer. lowest value si set to the start of the
	unix epoch, "January 1, 1970". systems using a 32-bit time_t type are susceptible to the year 2038 problem which in short, leaves
	affected systems unable to display/represent times after "03:14:07UTC, January 19, 2038 due to a roll over caused by a 32-bit integer storage.*/
	struct tm *pTime = NULL;
	bool isRunning = true;
	
	printf("how much time?\n\n");
	
	while(isRunning){
		
		time(&rawtime); /*gets current time and sets value of rawtime*/
		
		pTime = localtime(&rawtime); /*sets pTime to equal rawtime equivalent using time_t struct and localtime() function
		as provided by time header*/
		
		printf("\r%02d:%02d:%02d\n", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); /* "\r functions as "carriage return,
		replacing previous output line with new output line. usually, to output pointer value, you would dereference with
		(*pTime).tm_hour. to simplify the expression, you can use pTime->tm_hour. This functions the same way.*/
		
		sleep(1);
	}
	
	return 0;
}
