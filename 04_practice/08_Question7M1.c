// ques - Print the factorial of a given number 'n'.

#include<stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter n : ");
    scanf("%d",&n);
    while (n>0)
    {
        fact = fact * n;
        n = n-1;
    }
    printf("%d",fact);

    return 0;
}

