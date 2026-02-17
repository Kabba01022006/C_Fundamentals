//ques - Print the nth fibonacci number. 

#include<stdio.h>
int main()
{
    int a=1;
    int b=1;
    int n;
    int sum = 1;
    printf("Enter n : ");
    scanf("%d",&n);
    // printf("1\n");
    // printf("1\n");
    for(int i=1 ; i<=n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;   
    }
    printf("%d\n",sum);

    return 0;
}