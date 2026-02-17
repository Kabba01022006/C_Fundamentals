// if our n is even , so we can easily distribute our series in groups , suppose n = 6 , 6 terms , so , 1-2+3-4+5-6 --> (1-2)+(3-4)+(5-6) --> -1 + -1 + -1 ---> -3 , so the relation is like if n is even then the sum of the series is -n/2.

//if our n is odd suppose 7 , , 
// 1-2+3-4+5-6+7 , its gonna be the sum of even till just before n + n , so for example for 7 its gonna be -n/2 + 7th term. generalized is -n/2 + n and yeah in c if 7/2 its 3 , so it is correct . 

#include<stdio.h>
int main()
{
    int n;
    int sum = 0 ;
    printf("Enter n : ");
    scanf("%d",&n);

    if (n%2==0)
    {
        sum = -(n/2);
    }
    else if (n%2!=0)
    {
        sum = -(n/2) + n ;
    }
    printf("%d",sum);
    return 0;
}

