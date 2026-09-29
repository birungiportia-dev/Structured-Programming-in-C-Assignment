#include <stdio.h>
#include <stdlib.h>
/*
 A program that reads an integer (5 digits or fewer) and determines and prints how many digits in the integer are 9s.
*/
int main()
{
  int num, digit, count;
  count = 0;

  printf("Enter an integer (5 digits or fewer): ");
  scanf("%d", &num);

  if (num < 0 || num > 99999)
{
    printf("Invalid number. Please enter an integer with 5 digits or fewer.\n");

    return 0;
}
   else
  {


    while (num > 0)
    {
        digit = num % 10;

        if (digit == 9)
        {
            count++;
        }

        num = num / 10;
    }

  }


    printf("The number of digits that are 9 is: %d\n", count);


















    return 0;
}
