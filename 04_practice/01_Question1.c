// ques - Write a program to count digits of a given number.

#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (n!=0)
    {
        n = n / 10;
        count=count+1;
    }
    printf("%d",count);
    return 0;
}


// instead of while (n>0) use whil (n!=0) as using while (n>0) will give us false condition instantly whenever we enter negative number and our code will not run.