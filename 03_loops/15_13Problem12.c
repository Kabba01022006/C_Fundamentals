//ques - Display this GP  100,50,25,..... upto n terms.

#include<stdio.h>
int main()
{
    int n;
    float a=100;
    printf("Enter n : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        printf("%f\n",a);
        a=a/2;
    }
}