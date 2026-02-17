// ques - Write a program to print the sum of digits of a given number.

#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int digit;
    printf("Enter the number : ");
    scanf("%d",&n);

    while (n!=0)
    {
        digit = n % 10;
        n =  n / 10;
        sum = sum + digit;
    }
    printf("%d",sum);

    
    return 0;
}