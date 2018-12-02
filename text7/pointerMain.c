#include <stdio.h>

/*
  这是一个经典的指针实例
*/
void change(int a,int b)
{
  int tmp=a;
  a=b;
  b=tmp;
}
int main()
{
  int a,b;
  a=3;
  b=5;
  change(a,b);
  printf("a=%d\nb=%d\n",a,b);
  return 0;
}
