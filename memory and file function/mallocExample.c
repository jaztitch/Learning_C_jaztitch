#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//malloc() dynamically allocates a specified number of bytes in memory
	
	//char grades[5] = {0}; //fixed size doesn't allocate memory when already running
	//char *grades = malloc(100); allocates 100b to memory for specific array
	
	int number = 0;
	
	printf("Enter the number of grades: ");
	scanf("%d", &number);
	
	char *grades = malloc(number * sizeof(char)); /*allocates memory from "The Heap" based on: 
	created variable type"character" pointer named "grades" which is then passed as equal to memory allocation
	of: integer named "number" which is equal to user input number. user input number will create an array
	the size of user input number times the size of a character variable type(4b)*/
	
	if(grades == NULL){ //if array/character "grades" is empty or equal to "NULL"
		printf("Memory allocation failed");
		return 1; /*exits program as error code*/
	}
	
	for(int i = 0; i<number;i++){ /*for condition references number rather than sizeof function because pointer would provide size of memory location*/
		printf("Enter grade#%d: ", i+1);
		scanf(" %c", &grades[i]);
	}
	
	for(int i = 0;i<number;i++){ /*for condition references number rather than sizeof function because pointer would provide size of memory location*/
		printf("%c, ",grades[i]);
	}
	
	free(grades); /*returning rented memory to "The Heap".*/
	grades = NULL; /*returns array to NULL, avoiding "dangling pointer".*/
	
	return 0;
}
