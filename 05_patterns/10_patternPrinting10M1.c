//ques : Print the given pattern.
// 1
// 13
// 135
// 1257
// 13579

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*i-1;j=j+2)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
