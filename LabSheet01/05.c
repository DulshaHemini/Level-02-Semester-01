#include <stdio.h>

typedef struct AA
{
    int x;
} AA;

int main()
{
    AA structure;  //Creates an actual structure variable.
    AA *ptr;  //Creates a pointer capable of storing the address of an AA structure.

    structure.x = 46;  //Stores 46 in the structure member.

    ptr = &structure; //Now ptr points to the structure variable.

    printf("x is = %d\n", ptr->x);

    return 0;
}