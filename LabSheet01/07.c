#include <stdio.h>

void change(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

void pchange(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;

    change(a, b);


    int x = 10;
    int y = 20;

    pchange(&x, &y);
    
    return 0;
}