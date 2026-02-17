//ques : Print the given pattern :

// 1
// AB 
// 123
// ABCD
// 12345


#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
   
    for(int i=1;i<=n;i++)
    {
        int a=1;
        int b=65;
        for(int j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                printf("%d",a);
            }
            else if(i%2==0)
            {
                char ch=(char)b;
                printf("%c",ch);
            }
            a++;
            b++;
        }
        printf("\n");
    }
    return 0;
}