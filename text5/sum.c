#include <stdio.h>

/*
  这是一个输出形式为“和，数量”的小程序， 配合求平均数的小程序使用
*/

int main()
{
  int bool=1;
  int sum=0,count=0;
  int input;
  while(bool==1){
    scanf("%d",&input);
    if(input==0){
      break;
    }
    sum+=input;
    count++;
  }
  printf("%d,%d\n",sum,count);
  return 0;
}
