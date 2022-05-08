#include <stdio.h>

main()
{
  int charA;

  charA = getchar();

  while (charA != EOF)
  {
    putchar(charA);
    charA = getchar();
  }
  // EOF 使用快捷键 ctrl-d
  printf("%d, %d, %d", charA, EOF, charA != EOF);
}
