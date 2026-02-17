//ques : print the given pattern.

// ABCD
// ABCD
// ABCD
// ABCD    Hint -ASCII value of 'A' is 65.

#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        int a=1;
        for(int j=1;j<=n;j++)
        {
            int d = a+64;
            char ch=(char)d; //this is typecasting.
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}
