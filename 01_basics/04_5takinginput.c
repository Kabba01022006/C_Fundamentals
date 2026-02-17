#include <stdio.h>
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    int b;
    printf("Enter b : ");
    scanf("%d",&b);
    int quotient;
    quotient = a/b;
    int rem;
    rem = a - (b *quotient);
    printf("The remainder when %d is divided by %d is %d.",a,b,rem);
    return 0;
}