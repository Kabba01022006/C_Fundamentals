// ques : Print the given pattern.
// 1234
// 1234
// 1234
// 1234      -- number square or number rectanle.

#include<stdio.h>
int main()
{
    int m;
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&m);
    printf("Enter the number of columns : ");
    scanf("%d",&n);

    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++) //this loop is responsible for printing 12345...
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}