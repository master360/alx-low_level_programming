int main(void)
{
  char letter;

  /* print lowercase alphabet */
  for (letter = 'a'; letter <= 'z'; letter++)
    putchar(letter);

  /* print uppercase alphabet */
  for (letter = 'A'; letter <= 'Z'; letter++)
    putchar(letter);

  /* print new line */
  putchar('\n');

  return (0);
}
