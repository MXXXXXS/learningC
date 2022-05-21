#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
  int bytesCount = 2;
  size_t psize = bytesCount * sizeof(int);
  int *p = malloc(psize);
  printf("Allocated %zu bytes.\n", psize);
  printf("Resizing allocated memory\n");
  size_t pnsize = 2 * bytesCount * sizeof(int);
  int *pn = realloc(p, pnsize);
  printf("The memory block is now %zu bytes long.\n", pnsize);
  free(pn);
  return 0;
}
