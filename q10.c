//Question 10 — Print a Hollow Square 
#include <stdio.h>

void printpattern(int size)
{
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) 
        {
            if (i == 1 || i == size || j == 1 || j == size)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main(void) 
{
    printpattern(5);
    return 0;
}