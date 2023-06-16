/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using only putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char letter;

  for (letter = 'a'; letter <= 'z'; letter++)
    putchar(letter);

  putchar('\n');

  return (0);
}

