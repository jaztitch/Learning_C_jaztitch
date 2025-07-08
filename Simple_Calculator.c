#include <stdio.h>
#include <math.h>

int main(){
	
	//simple text based calculator
	
	char oper = '\0';
	double num1 = 0.0;
	double num2 = 0.0;
	double result = 0.0;
	
	printf("Enter the first number: ");
	scanf("%lf", &num1);
	while ((getchar()) != '\n');
	
	printf("Enter the operator(+ - * /): ");
	scanf("%c", &oper); //clear \n from buffer
	while ((getchar()) != '\n');
	
	if(oper != '+' || oper != '-' || oper != '*' || oper != '/'){
		printf("Not a valid operater. Please choose a valid operator: ");
		scanf("%c", &oper);
	while ((getchar()) != '\n');
	}

	printf("Enter the second number: ");
	scanf("%lf", &num2);
	
	switch(oper){
		case '+':
			result = num1 + num2;
			break;
		
		case '-':
			result = num1 - num2;
			break;
		
		case '*':
			result = num1 * num2;
			break;
		
		case '/':
			if(num2 == 0){
				printf("Division by 0 not possible.");
			}
			else{
			result = num1 / num2;
			break;
		}
	};
	
	printf("%lf %c %lf = ", num1, oper, num2);
	printf("%lf", result);
	
	return 0;
}
