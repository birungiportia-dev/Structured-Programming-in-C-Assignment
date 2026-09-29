#include <stdio.h>
#include <stdlib.h>
/*
A program that prints a table of the first ten whole numbers alongside their squares, cubes and fourth powers.
*/
int main()
{

    int n;

    printf("N\t N^2\t N^3\t N^4\n");

    for (n = 1; n <= 10; n++) {
        printf("%d\t %d\t %d\t %d\n", n, n * n, n * n * n, n * n * n * n);
    }










    return 0;
}
