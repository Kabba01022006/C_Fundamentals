//ques - Write a program to print the sum of a given number and its reverse.

// sum = n + n ka reverse

#include<stdio.h>
int main()
{
    int n;
    int rev = 0;
    int sum ;
    int digit;
    printf("Enter the number : ");
    scanf("%d",&n);
    int org = n;
    while (n!=0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    sum = org + rev ;
    printf("%d",sum);
    
    return 0;
}