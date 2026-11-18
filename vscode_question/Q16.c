// Question 16 - Print a Diamond Pattern
#include <stdio.h>

void printpattern(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i; j++)
            printf("  ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 1; j <= size - i; j++)
            printf("  ");

        for (int j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }
}

int main(void)
{
    printpattern(3);
    return 0;
}