//Question 3 — Print an Inverted Triangle
#include <stdio.h>
void printpattern(int size)
{
    for(int i=1;i<=size;i++)
    {
        for(int j=size;j>=i;j--)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
}   
int main()
{
    printpattern(4);
    return 0;
}