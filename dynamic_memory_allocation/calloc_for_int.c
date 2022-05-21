#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char c;
  int x;
  double d;
} MyStruct;

int main(int argc, char const *argv[])
{
  size_t bytesCount = 5;
  int *p = calloc(bytesCount, sizeof(int));
  if (p)
  {
    printf("Initial values:\n");
    for (int i = 0; i < bytesCount; i++)
    {
      printf("%d ", p[i]);
    }
    printf("\nNew values:\n");
    for (int i = 0; i < bytesCount; i++)
    {
      p[i] = (i + 1) * 2;
      printf("%d ", p[i]);
    }
    printf("\n");
  }
  free(p);
  return 0;
}
