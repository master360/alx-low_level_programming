#include "main.h"

int main(void)
{
    char str[] = "_putchar";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');

    return (0);
}

