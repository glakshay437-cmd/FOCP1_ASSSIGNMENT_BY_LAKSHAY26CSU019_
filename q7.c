//Question 7 — Print a Right-Aligned Star Triangle
#include <stdio.h>
int main(void)
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (int star = 1; star <= i; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}