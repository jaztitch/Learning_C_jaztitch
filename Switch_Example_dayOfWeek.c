#include <stdio.h>

int main(){
	/*switches are an alternative to if-else statements and are more efficient with fixed interger values*/
	
	int dayOfWeek = 0;
	
	printf("Enter numerical value of what day of the week it is: ");
	scanf("%d", &dayOfWeek);
	
	switch(dayOfWeek){
		case 1:
			printf("It is Monday");
			break;
		case 2:
			printf("It is Tuesday");
			break;
		case 3:
			printf("It is Wednesday");
			break;
		case 4:
			printf("It is Thursday");
			break;
		case 5:
			printf("It is Friday");
			break;
		case 6:
			printf("It is Saturday");
			break;
		case 7:
			printf("It is Sunday");
			break;
	}
	
	return 0;
}
