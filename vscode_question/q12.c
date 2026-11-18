//Question 12 — Print a Multiplication Table Grid 
#include <stdio.h>

int main(void)
{
    int size;

    printf("Enter the size of the multiplication table: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}