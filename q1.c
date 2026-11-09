//Question 1 — Print a Solid Square 
#include <stdio.h>
void printpattern(int row, int col)
{
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
}   
int main()
{
    printpattern(4,4);
    return 0;
}