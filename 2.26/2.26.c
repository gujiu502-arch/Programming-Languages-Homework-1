#include <stdio.h>

int main(void)
{
    int a,b;
    printf("输入两个整数\n");
    scanf("%d%d",&a,&b);
    if(b==0){
        printf("第二个数不能为0\n");
        return 0;
    }
    if(a % b == 0){
        printf("第一个数是第二个数的倍数\n");
    }
    
    else{
        printf("第一个数不是第二个数的倍数\n");
    }

    return 0;
}