$ betty-style.pl 0-positive_or_negative.c
$ betty-doc.pl 0-positive_or_negative.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a random number and prints whether it's positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("%d ", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n < 0)
    {
        printf("is negative\n");
    }
    else
    {
        printf("is zero\n");
    }

    return (0);
}

