#include <stdio.h>

int main(int argc, char const *argv[])
{
  long nc = 0;

  while (getchar() != EOF)
  {
    nc++;
  }
  printf("\n%ld\n", nc);

  return 0;
}
