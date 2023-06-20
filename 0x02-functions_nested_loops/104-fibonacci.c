#include <stdio.h>

int main(void)
{
    int n = 98;
    int fib1 = 1, fib2 = 2, fib3;
    int i;

    printf("%d, %d", fib1, fib2);

    for (i = 3; i <= n; i++)
    {
        fib3 = fib1 + fib2;
        printf(", %d", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\n");

    return 0;
}
