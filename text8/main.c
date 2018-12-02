#include <stdio.h>

/*
  通过代码学习各个内存的段存的内容
*/

//全局变量存在数据段
int global=0;

int rect(int a,int b)
{
  static int count=0;
  count++;
  global++;
  int s=a*b;
  return s;
}

int quadrate(int a)
{
  //静态变量
  static int count=0;
  count++;
  global++;
  int s=rect(a,a);
  return s;
}

int main()
{
  int a=3;
  int b=4;
  int *pa=&a;
  int *pb=&b;
  int *pglobal	=&global;
  int (*pquadrate)(int a)=&quadrate;
  int s=quadrate(a);
  int p=(*pquadrate)(a);
  printf("%d\n",s);  
  return 0;
}
