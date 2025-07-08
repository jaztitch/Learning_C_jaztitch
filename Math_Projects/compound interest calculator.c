#include <stdio.h>
#include <math.h>

int main(){ //compound interest calculator

double principal = 0.0;
double rate = 0.0;
int years = 0;
int timesComp = 0;
double total = 0.0;

printf("Compound interest calculator\n");
printf("Enter the Principal (P):");
scanf("%lf", &principal);
printf("Enter the Interest Rate %% (r): ");
scanf("%lf", &rate);
rate = rate/100;
printf("Enter the # of Years (t): ");
scanf("%d", &years);
printf("Enter the # of times compunded per year (n): ");
scanf("%d", &timesComp);

total = principal * pow(1+rate/timesComp,timesComp*years);
printf("After %d years, the total will be $%.2lf", years, total);

return 0;}
