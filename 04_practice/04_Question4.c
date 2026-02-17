// Ques - Write a program to print reverse of a given number.

#include<stdio.h>
int main()
{
    int n;
    int rev = 0;
    int digit;
    printf("Enter the number : ");
    scanf("%d",&n);

    while(n!=0)
    {
        digit = n % 10;
        rev = rev*10 + digit;
        n = n / 10;

    }
    printf("%d",rev);
}