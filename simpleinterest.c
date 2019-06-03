#include <stdio.h>

int main()
{
    int pri,year;
    float si,interest;

    printf("Welcome to the Simple Interest Calculator \n");
    printf("Enter your principle amount \n");
    scanf("%d",&pri);
    printf("Enter interest rate\n");
    scanf("%f",&interest);
    printf("Enter for how many years? \n");
    scanf("%d",&year);

    si= (pri*interest*year)/100;
    printf("Simple Interest is %f",si);

}
