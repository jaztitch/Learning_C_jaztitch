#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*realloc() is the reallocation function
	it resizes previously allocated memory
	use: realloc(pointer, bytes);*/
	
	int number = 0;
	
	printf("Enter the number of prices: ");
	scanf("%d", &number);
	
	float *prices = calloc(number, sizeof(float));
	
	if(prices == NULL){
		printf("Memory allocation failed");
		return 1;
	}
	
	for(int i = 0; i < number; i++){
		printf("Enter price#%d: ", i+1);
		scanf(" %f", &prices[i]);
	}
	
	int newNumber = 0;
	
	printf("Enter a new number of prices: ");
	scanf("%d", &newNumber);
	
	float *temp = realloc(prices, newNumber * sizeof(float)); /*If new number of entries smaller than old,
	will still reallocate memory and remove entries after specified number of entries in memory.*/
	
	if(temp == NULL){
		printf("Memory allocation failed");
	}
	else{
		prices = temp;
		temp = NULL;
		
	for(int i = number; i < newNumber; i++){ /*continues input from last position in array based on 
	previously entered number of entries, setting "i" to the value of "number". for statement ends
	when it reaches new number of entries.*/
		printf("Enter price#%d: ", i+1);
		scanf(" %f", &prices[i]);
	}
	
		for(int i=0;i<newNumber;i++){
		printf("%.2f ", prices[i]);
	}
	
	}
	
	free(prices);
	prices = NULL;
	
	return 0;
}
