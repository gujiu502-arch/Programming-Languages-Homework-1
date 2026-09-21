#include <stdio.h>

int main(void)
{
    int a;

    printf("输入数字判断奇偶\n");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("该数字是偶数\n");
    }
    else {
        printf("该数字是奇数\n");
    }

    return 0;
}