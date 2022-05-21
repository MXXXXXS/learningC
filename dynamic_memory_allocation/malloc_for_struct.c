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
  MyStruct *p = malloc(sizeof(MyStruct));
  if (p)
  {
    p->c = 'A';
    p->d = 114.514;
    p->x = 123;

    printf("MyStruct c: %c\n", p->c);
    printf("MyStruct x: %d\n", p->x);
    printf("MyStruct d: %f\n", p->d);
  }
  free(p);
  return 0;
}
