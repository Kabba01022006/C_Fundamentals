// ques - Print the sum of this series : 1 - 2 + 3 - 4 + 5 - 6 .... upto 'n'.

#include<stdio.h>
int main()
{
    int n ;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    // one simple observation is that all odd numbers are positive while all even numbers are negative , so we will subtract all the even numbers from the odd numbers.
    for (int i=1; i<=n ; i++)
    {
        if (i%2==0) 
        sum=sum-i;
        else if (i%2!=0)
        sum=sum +i;
    }
    printf("%d",sum);
    return 0;
}