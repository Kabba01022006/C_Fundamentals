#include<stdio.h>
int main()
{
    int i =10;
    while(i=20)
    {
        printf("\nA computer buff!");
    }
    return 0;
}

/* Two reasons why this is an infinite loop:
1. Operational: The '=' operator re-assigns i = 20 every time the loop repeats, 
   overwriting any changes made to 'i' inside the loop.
2. Logical: In C, any non-zero value is 'True'. Since the assignment result 
   is 20 (not 0), the condition stays 'True' forever.
*/