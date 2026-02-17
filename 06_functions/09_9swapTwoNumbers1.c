//swapping two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a : %d\n",a);
    printf("b : %d",b);
    return 0;
}