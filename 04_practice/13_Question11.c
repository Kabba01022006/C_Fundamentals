//ques - Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include<stdio.h>
int main()
{
    int a;
    int b;
    int result=1;

    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power : ");
    scanf("%d",&b);

    for(int i=1; i<=b; i++)
    {
        result = result * a ;
    }
    printf("%d",result);

    return 0;
}