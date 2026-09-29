#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, curr_int,count;
   int sum = 0;
   float average;

  printf("How many integers will you enter?:");
  scanf("%d", &num);

for (count = 1; count <= num; count++)
{
    printf("Enter integer %d: ", count);
    scanf("%d", &curr_int);
    sum = sum + curr_int;
}

    average = (float)sum / num;
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);










    return 0;
}
