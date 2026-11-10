#include<stdio.h>

int main(){

    int num;
    float fl;
    char ch;

    int *numptr;
    float *flptr;
    char *chptr;

    num = 154;
    fl = 78.5;
    ch = 'g';

    numptr = &num;
    flptr = &fl;
    chptr = &ch;

    printf("%d\n", *numptr);
    printf("%p\n", (void *)numptr);
    printf("%p\n", (void *)&numptr);

    printf("%f\n", *flptr);
    printf("%p\n", (void *)flptr);
    printf("%p\n", (void *)&flptr);

    printf("%d\n", *chptr);
    printf("%p\n", (void *)chptr);
    printf("%p\n", (void *)&chptr);

    (*chptr)++;
    (*numptr)++;
    (*flptr)++;


    printf("\n After %d\n", *numptr);
    printf("After %p\n", (void *)numptr);
    printf("After %p\n", (void *)&numptr);

    printf("\nAfter %f\n", *flptr);
    printf("After %p\n", (void *)flptr);
    printf("After %p\n", (void *)&flptr);

    printf("\nAfter %d\n", *chptr);
    printf("After %p\n", (void *)chptr);
    printf("After %p\n", (void *)&chptr);
    
    return 0;
}