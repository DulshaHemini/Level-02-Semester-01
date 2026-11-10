#include <stdio.h>

void twice(int *val);

int main()
{
    int x;
    int *y;

    x = 56;
    y = &x;

    twice(&x);

    printf("x value = %d\n", x);
    printf("y memory address = %p\n", (void *)y);
    printf("and value of y = %d\n", *y);

    return 0;
}

void twice(int *val)
{
    *val = *val * 2;
}