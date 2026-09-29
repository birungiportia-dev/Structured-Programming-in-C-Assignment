#include <stdio.h>
#include <stdlib.h>
/*
A complete program that calculates the product of three integers
*/
int main()
{
    int num1, num2, num3, prod;

    printf("Enter number 1:");
    scanf("%d",&num1);

    printf("Enter number 2:");
    scanf("%d",&num2);

    printf("Enter number 3:");
    scanf("%d",&num3);


    prod = num1*num2*num3;

    printf("The product of the three numbers is %d",prod);










    return 0;
}
