#include<stdio.h>

int main(void)
{
    int var1 = 0;
    int val2=10;
    const int* ptr = &var1;
    ptr = &val2;
    printf("%d\n", *ptr);

    return 0;
}
