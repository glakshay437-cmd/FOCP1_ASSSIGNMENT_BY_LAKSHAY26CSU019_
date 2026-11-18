//Question 13 — Print a Checkerboard 
#include <stdio.h>
void printpattern(int SIZE)
{
    for(int i=1;i<=SIZE;i++)
    {
        for(int j=1;j<=SIZE;j++)
        {
            if ((i+j)%2==0)
                printf("%c",'X');
            else
                printf("%c",'O');
        }
        printf("\n");
    }
}   
int main()
{
    printpattern(6);
    return 0;
}