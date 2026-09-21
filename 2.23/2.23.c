#include <stdio.h>

int main(void)
{
    int a, b, c;
    int largest, smallest;
    printf("输入3个值找最大最小值：\n");
    scanf("%d%d%d", &a, &b, &c);

    largest = a;
    smallest = c;

    if (largest < b) {
        largest = b;
    }

    if (largest < c) {
        largest = c;
    }

    if (smallest > b) {
        smallest = b;
    }

    if (smallest > a) {
        smallest = a;
    }

    printf("最大值为%d\n", largest);
    printf("最小值为%d\n", smallest);

    return 0;
}