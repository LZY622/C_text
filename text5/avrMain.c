#include <stdio.h>

/*
  这是一个求平均数的小程序
  配合另外的小程序（求和，计数）进行使用
*/

int main()
{
  int s,n;
  scanf("%d,%d",&s,&n);
  printf("所输入的数值平均数是%d\n",s/n);
  return 0;
}
