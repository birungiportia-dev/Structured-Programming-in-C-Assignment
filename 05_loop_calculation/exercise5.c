#include <stdio.h>
#include <stdlib.h>
/*
A program that prints the sum, the sum of the squares, and the sum of the cubes of all natural numbers from 1 till any number entered by the user. ie if
user enters 3, it gets the sum of (1+2+3) and the respective squares and cubes
*/
int main()
{
    int num, i;
    int sum_num=0;
    int sum_sq=0;
    int sum_cube=0;

    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
       sum_num = sum_num + i;
        sum_sq = sum_sq + i*i;
        sum_cube = sum_cube + i*i*i;
    }

    printf("The sum of all the natural numbers is %d\n",sum_num);
    printf("The sum of the squares of  all the natural numbers is %d\n",sum_sq);
    printf("The sum of  the cubes of all the natural numbers is %d\n",sum_cube);

















    return 0;
}
