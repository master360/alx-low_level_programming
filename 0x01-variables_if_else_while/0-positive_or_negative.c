#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
     *main - Determines if a number is positive, or negative or zero.
     *
     *Return: Always 0(Success) 
     */
int main() {
    srand(time(NULL));
    int n = rand() % RAND_MAX - RAND_MAX/2;
    printf("%d ", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

