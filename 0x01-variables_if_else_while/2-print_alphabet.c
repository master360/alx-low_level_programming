int main(void)
{
  char letter;

  /* print lowercase alphabet in reverse order */
  for (letter = 'z'; letter >= 'a'; letter--)
    putchar(letter);

  /* print new line */
  putchar('\n');

  return (0);
}
