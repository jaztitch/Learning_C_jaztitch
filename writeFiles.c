#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w");

    char text[]="This is a test file.";

    if(pFile == NULL){
        printf("Error opening file.");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File successfully written.");

    fclose(pFile);

    return 0;
}