#include <stdio.h>
#include <stdlib.h>
/*
 A program that will determine the gross pay for each of several employees. The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half”
 for all hours worked in excess of 40 hours. Assume that list  you are given the list of the company’s employees, the number of hours each worked last week and each employee’s hourly rate(10)
*/
int main()
{

   float hours, rate, gross_pay;

    while (1)
    {
       printf("Enter hours worked ( enter -1 to end program): ");
        scanf("%f", &hours);

        if (hours == -1)
        {
            break;
        }

        printf("Enter hourly rate: ");
        scanf("%f", &rate);

        if (hours <= 40)
        {
            gross_pay = hours * rate;
        }
        else
        {
            gross_pay = (40 * rate) + ((hours - 40) * rate * 1.5);
        }

        printf("Gross pay: $%.2f\n\n", gross_pay);
    }

    printf("Program ended.\n");




















    return 0;
}
