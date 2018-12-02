#include <stdio.h>

int main(int argv,char* argc[])
{
    printf("argv is %d\n",argv);
    int i;//for循环中不能声明变量
    for(i=0;i<argv;i++){
         printf("argc[%d] is %s\n",i,argc[i]);
    }
    return 0;
}
