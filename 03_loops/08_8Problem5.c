//ques - Print the table of 'n'.Here 'n' is an integer which user will input.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integer you want the table of : ");
    scanf("%d",&n);

    for (int i=n;i<=n*10;i=i+n)
    {
        printf("%d\n",i);
    }
    return 0;
}