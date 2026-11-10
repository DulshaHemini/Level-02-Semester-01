#include <stdio.h>

int main()
{
    const int MAX_SIZE = 10;  //Creates a constant named MAX_SIZE.
    int arr[MAX_SIZE];
    int i, sum = 0;

    printf("Enter 10 elements:\n");

    for (i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Elements are: ");

    for (i = 0; i < MAX_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSum = %d", sum);

    return 0;
}