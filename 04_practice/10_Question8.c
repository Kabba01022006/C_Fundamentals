//ques : Print the factorials of first 'n' numbers.

// we know , n! = n * (n-1)!


#include<stdio.h>
int main()
{
    int n;
    int fact = 1;
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        fact = fact * i ;
        printf("%d\n",fact);
    }

    return 0;
}