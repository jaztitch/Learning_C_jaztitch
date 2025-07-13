#include <stdio.h>
#include <unistd.h>

int main(){

    FILE *pFile = fopen("output.txt", "r");
    char buffer[1024] = {0};

    if (pFile == NULL)
    {
        printf("Error, could not read file.");
        return 1;
    }
    
    while (fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
        sleep(1.5);
    }

    printf("\n");

    fclose(pFile);

    return 0;
}