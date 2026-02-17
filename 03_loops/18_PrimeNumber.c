#include<stdio.h>
int main()
{
    int a = 0;
    int n;
    printf("Enter your number : ");
    scanf("%d",&n);

    for (int i = 2 ; i<= n-1 ; i++)
    {
        if (n%i==0)
        {
            a+=1;
            break;
        }
    }
    if (n==0) {printf("0 is neither prime nor composite.");}
    else if (n==1) {printf("1 is neither prime nor composite.");}
    else if (a==1) {printf("%d is not a prime number i.e. it is a composite number.",n);}
    else if (a==0) {printf("%d is a prime number",n);}

    return 0;
    
}