#include <stdio.h>
#include "max.h"
#include "min.h"


int main()
{
    int a1=5;
    int a2=3;
    int maxNum=max(a1,a2);
    int minNum=min(a1,a2);
    printf("maxNum is %d\n",maxNum);
    printf("minNum is %d\n",minNum);
    return 101;
}
