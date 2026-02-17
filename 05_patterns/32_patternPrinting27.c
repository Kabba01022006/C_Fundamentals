//ques : Print the given pattern : 

//      A
//     ABA
//    ABCBA
//   ABCDCBA     :Number pyramid mast 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%c",k+64);
        }
        for(int l=i-1;l>=1;l--)
        {
            printf("%c",l+64);
        }
        printf("\n");
    }
    return 0;

}