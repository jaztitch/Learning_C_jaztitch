#include <stdio.h>
#include <stdbool.h>

int main(){
	
	//nested if-else statements example
	
	float price = 10.00;
	bool isStudent = true; //10% discount for students
	bool isSenior=true; //20% discount
	
	/* Student pays $9
	Senior pays $8
	Student and Senior pays $7*/
	
	printf("The cost of a standard ticket is: $%.2f\n", price);
	
	if(isStudent){
		if(isSenior){
			printf("You get a student discount of 10\%\n");
			printf("You qualify for a Senior discount of 20\%!\n");
			price*=0.7;
		}
		else{
			printf("You get a student discount of 10\%\n");
			price*=0.9;
		}
	}
	else{
		if(isSenior){
			printf("You qualify for a Senior discount of 20\%!\n");
			price*=0.8;
	}
}
	printf("The price of a ticket is: $%.2f\n", price);
	
	return 0;
}
