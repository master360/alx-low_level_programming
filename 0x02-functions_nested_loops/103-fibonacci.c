#include <stdio.h>

int main(void)
{
    int fib1 = 1, fib2 = 2, fib3;
    int sum = 2; // Start with 2 since the second term is even
    int max = 4000000;

    while (fib2 <= max)
    {
        fib3 = fib1 + fib2;
        if (fib3 % 2 == 0)
        {
            sum += fib3;
        }
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("%d\n", sum);

    return 0;
}
