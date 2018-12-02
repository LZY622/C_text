#include <stdio.h>
/*
做一个输出在文件 输入也在文件 作物也在文件的程序
分别输入两个数字计算相除之后的结果
*/

int main()
{
  int a,b;
  printf("pls input a num (a):\n");
  scanf("%d",&a);
  printf("pls input another num (b):\n");
  scanf("%d",&b);
  if(b<=0){
    fprintf(stderr,"the b must > 0\n");
    return 1;
  }else{
    printf("%d / %d = %d\n",a,b,a/b);
    return 0;
  }
}
