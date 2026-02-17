#include<stdio.h>
#include<math.h>
int main()
{
    int n ;
    int count = 0;
    int sum=0;
    int rem=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int original = n;
    int duplicate = n;
    while (n!=0)
    {
        n = n / 10;
        count += 1;
    }
    while(original!=0)
    {
        rem = original % 10;
        int p = 1;
        for(int i =1;i<=count;i++)
        {
            p = p*rem;
        }
        sum = sum + p;
        original = original / 10;

    }
    if(sum==duplicate)
    {
        printf("it is an armstrong number.");
    }
    else
    {
        printf("it is not an armstrong number.");

    }
        return 0;

}
    
    

