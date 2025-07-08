#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void happyBirthday(char target[]){
	printf("Your name is %s \n", target);
	printf("Happy birthday to you\n");
	printf("Happy birthday to you\n");
	printf("Happy birthday dear %s \n", target);
	printf("Happy birthday to you.\n");
}

int main(){
	
	/* function = reusable section fo code that can be "called"
	arguments can be sent to a function for its use. */
	
	char name[30]="";
	bool isBirthday;
		
	printf("What is your name?\n");
	fgets(name,sizeof(name),stdin);
	name[strlen(name)-1]='\0';
	
	happyBirthday(name);

	return 0;
}
