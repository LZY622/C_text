#include <stdio.h>

/*

数组

*/
int main()
{
  char array[]="hello";
  int a=3;
  int b=5;
  //char array[]="hello";
  char *parr="hello";
  char array3[7]="hello3";
  int i;
  for(i=0;i<20;i++){
    printf("%c\n",array[i]);
  }
  return 0;
}
