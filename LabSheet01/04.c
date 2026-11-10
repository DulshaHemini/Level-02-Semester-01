#include<stdio.h>
#define SIZE 3

typedef struct _student
{
    char name[50];
    int mark;
} student;

void print_list(student list[]);
void read_list(student list[]);

int main(){
    student list[SIZE];
    
    read_list(list);
    print_list(list);
    

    return 0;
}

void read_list(student list[])
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Name and marks: ");
        scanf("%49s %d", list[i].name, &list[i].mark);
    }
}

void print_list(student list[])
{
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Name: %s, Mark: %d\n",
               list[i].name,
               list[i].mark);
    }
}