#include <stdio.h>

int main(){
	
	char choice = '\0';
	float fahrenheit = 0.0f;
	float celsius = 0.0f;
	
	printf("Temperature Conversion Program\n");
	printf("Is the temperature in Celsius(C)) or Fahrenheit(F))?: ");
	
	scanf("%c", &choice);
	
	if (choice =='C'){
		printf("Enter the temperature in Celsius: ");
		scanf("%f", &celsius);
		fahrenheit = (celsius*9/5)+32;
		printf("%.1f celsius is equal to %.1f Fahrenheit", celsius, fahrenheit);
		
	}
	else if (choice =='F'){
		printf("Enter the temperature in Fahrenheit: ");
		scanf("%f", &fahrenheit);
		celsius=(fahrenheit-32)*5/9;
		printf("%.1f Fahrenheit is equal to %.1f Celsius", fahrenheit, celsius);
	}
	else {
		printf("Invalid choice");
	}
	
	return 0;
}
