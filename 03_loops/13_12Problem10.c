//ques - Display this GP  3,12,48,.... upto 'n' terms.

#include<stdio.h>
int main()
{
    int n;
    int a=3;
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a=a*4;
    }
}