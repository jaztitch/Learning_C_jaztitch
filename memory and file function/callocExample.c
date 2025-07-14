#include <stdio.h> //includes standard headers
#include <stdlib.h> //includes standard function headers

int main(){
	
	/*calloc() Contiguous Allocation
	Allocates memory dynamically and sets all allocated bytes to "0"
	malloc() is faster but calloc() leads to fewer bugs.
	use: calloc(#, size)*/
	
	int number;
	
	printf("enter the number of players: ");
	scanf("%d", &number);
	
	int *scores = calloc (number, sizeof(int)); /*creates pointer equal to user input number of players
	each the size of a standard integer variable */
	
	if(scores = NULL){
		printf("Memory allocation failed. \n");
		return 1;
	}
	
	for(int i = 0; i < number; i++){
		printf("Enter score number %d: ", i + 1);
		scanf("%d", &scores[i]);
	}
	
	for(int i = 0; i < number; i++){
		printf("%d ", scores[i]);
	}
	
	free(scores); /*returning rented memory to "The Heap".*/
	scores = NULL;  /*returns array to NULL, avoiding "dangling pointer".*/
	
	return 0;
}
