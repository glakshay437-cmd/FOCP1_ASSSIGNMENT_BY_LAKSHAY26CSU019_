//Question 4 — Print a Number Triangle 
#include <stdio.h>
void printpattern(int size)
{
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}   
int main()
{
    printpattern(4);
    return 0;
}