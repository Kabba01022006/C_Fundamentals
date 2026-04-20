// Ques - Write a program to print odd numbers from 1 to 100. 

//The continue statement skips the remainder of the current loop iteration and jumps directly to the next one.

#include<stdio.h>
int main()
{
    for (int i=1 ; i<= 100 ; i++)
    {
        if (i%2==0){
            continue;  
        }
        printf("%d\n",i);
    }
    return 0;
}

