//Question 11 — Print a Hollow Right-Angled Triangle 
#include <stdio.h>

void printpattern(int size)
{
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <=i ; j++) 
        {
            if (i == 1 || i == size || j == 1 || j == i)
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