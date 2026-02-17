// print all odd numbers from 1 to 100 using while loop.

#include<stdio.h>
int main()
{
    int i = 1;
    while (i<=100)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
        }
        
        i++; // or i = i -1 

    }
    return 0;
}