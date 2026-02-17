//ques - Display this GP   1,2,4,8,16,32,.... upto 'n' terms.

#include<stdio.h>
int main()
{
    int n;
    int a=1;
    printf("Enter n : ");
    scanf("%d",&n);

    for (int i=1;i<=n;i=i+1)
    {
        printf("%d\n",a);
        a=a*2;
        
    }
}