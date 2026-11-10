#include <stdio.h>
#include <string.h>


struct book
{
    char title[100];
    char author[50];
    char ISBN[20];
    float price;
};

struct book books[10];

void displayCheapBooks(struct book books[])
{
    for (int i = 0; i < 10; i++)
    {
        if (books[i].price < 2000.00)
        {
            printf("%s\n", books[i].title);
        }
    }
}

void displayKernighanBooks(struct book books[])
{
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(books[i].author, "Kernighan") == 0)
        {
            printf("Title: %s\n", books[i].title);
            printf("Price: %.2f\n", books[i].price);
        }
    }
}

int main()
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        printf("ISBN: ");
        scanf(" %[^\n]", books[i].ISBN);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nBook Details:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("ISBN: %s\n", books[i].ISBN);
        printf("Price: %.2f\n", books[i].price);
    }

    printf("\nBooks priced below 2000.00:\n");
    displayCheapBooks(books);
    
    return 0;
}