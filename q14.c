//Question 14 — Print Floyd's Triangle
#include <stdio.h>
void printpattern(int size)
{
    int count=1;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=i;j++)
        {
             printf("%d ",count);
             count++;
        }
            
        printf("\n");
    }
}   
int main()
{
    printpattern(4);
    return 0;
}