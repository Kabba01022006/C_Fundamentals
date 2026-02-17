// in the modification of the previous code . 

#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    int nfact=factorial(n);
    int rfact=factorial(r);
    int nrfact=factorial(n-r);
    int ncr = (nfact/((rfact)*(nrfact)));
    return ncr;

}

int main ()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int r;
    printf("Enter r : ");
    scanf("%d",&r);
    printf("%d",combination(n,r));  
    // or we can do 
    // int result = combination(n,r);
    // printf("%d",result);
    return 0;
}