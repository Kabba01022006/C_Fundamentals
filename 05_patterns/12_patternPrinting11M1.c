//ques : print the given pattern.

// ABCD
// ABCD
// ABCD
// ABCD    Hint -ASCII value of 'A' is 65.


#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=65;j<=65+n-1;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}