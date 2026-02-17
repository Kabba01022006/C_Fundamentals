//ques - Print first n fibonacci numbers.
#include<stdio.h>
int main()
{
    int a=1;
    int b=1;
    int n;
    int sum;
    printf("Enter n : ");
    scanf("%d",&n);
    if (n <= 0) {return 0;}
    if (n >= 1) {printf("1\n");}
    if (n >= 2) {printf("1\n");}
    for(int i=1 ; i<=n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d\n",sum);
    }
    return 0;
}
