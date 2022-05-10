#include <stdio.h>

// 把本程序作为输入
// cat count_digits_space_others.c | ./a.out

int main(int argc, char const *argv[])
{
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  // 初始化存放统计数字的数组
  for (i = 0; i < 10; i++)
  {
    ndigit[i] = 0;
  }
  // 开始读取输入
  while ((c = getchar()) != EOF)
  {
    // 判断是否是数字
    if (c >= '0' && c <= '9')
    {
      // c - '0'是一个类型转换
      ndigit[c - '0']++;
    }
    else if (c == ' ' || c == '\n' || c == '\t')
    {
      nwhite++;
    }
    else
    {
      nother++;
    }
  }
  printf("digits = ");
  // 输出统计数字的数组
  for (i = 0; i < 10; i++)
  {
    printf(" %d", ndigit[i]);
  }
  printf(", white space = %d, other = %d\n", nwhite, nother);

  return 0;
}
