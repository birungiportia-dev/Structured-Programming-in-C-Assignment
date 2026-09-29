#include <stdio.h>
#include <stdlib.h>
/*
A program that reads an integer and determines whether it is odd or even
*/
int main()
{
   int num;

   printf("Enter the numeric figure:");
   scanf("%d",&num);

   if(num % 2 == 0)
   {
       printf("It is an even number");
   }
   else
   {
       printf("It is an odd number");
   }



















    return 0;
}
