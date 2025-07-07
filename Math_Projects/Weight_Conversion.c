#include <stdio.h>

int main(){

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n1. Kilograms to Pounds.\n2. Pounds to Kilograms.\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice == 1){
        //KG to LB
        printf("Enter the weight in Kilograms:");
        scanf("%f",&kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    else if(choice == 2){
        //LB to KG
        printf("Enter the weight in Pounds:");
        scanf("%f",&pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    else{
        printf("Invalid Choice!");
    }

    return 0;
}