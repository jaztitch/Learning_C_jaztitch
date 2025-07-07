#include <stdio.h>
#include <string.h>

int main(){

    //Shopping Cart Program from "Bro Code" youtube channel

    char item[50] = "0";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What would you like to purchase?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each item?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You\'ve purchased %d %s for: ", quantity, item);
    printf("%c%.2f\n", currency, total);

    return 0;
}
