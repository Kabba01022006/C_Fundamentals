//ques - Display this ap   4,7,10,13,16.... upto 'n' terms (without using any maths like AP ka formula etc etc.)


#include<stdio.h>
int main()
{
    int n;
    int a =4;
    printf("Enter n : ");
    scanf("%d",&n);

    for (int i=1;i<=n;i=i+1)
    {
        printf("%d\n",a);
        a=a+3;
    }
    return 0;
}