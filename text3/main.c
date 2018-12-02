#include <stdio.h>
/*
没启动一个程序都会打开下面三个文件
stdin
stdout
stderr
*/
int main()
{
  //printf(“please input a num :”);
  fprintf(stdout,"please input a num :");
  int a;
  //printf(“%d”,&a);
  fscanf(stdin,"%d",&a);
  fprintf(stdout,"the a is %d\n",a);
  if(a<0){
    fprintf(stderr,"the num must > 0\n");
    return 1;
  }
  return 0;
}
