#include <stdio.h>

typedef struct 
{
    char make[10];
    char model[25];
    int year;
    int price;
}Car;


int main(){

    Car cars[]={{"Kia","Rio", 2020, 30000},
                {"Buick","LeSabre", 2001, 20000},
                {"Chevy","Caprice", 1992, 15000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for (int i = 0; i < number; i++)
    {
        printf("Car %d: %s %s %d $%d\n",i+1, cars[i].make, cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}