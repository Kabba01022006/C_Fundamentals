//ques : Print the given pattern : 
// 1
// 01
// 101
// 0101     0 and 1 triangle.

#include<stdio.h>
int main()
{
    int n;
    int a;
    printf("Enter the number of rows : "); 
    scanf("%d", &n);


    for(int i=1;i<=n;i++)
    {
    if (i%2!=0)
    {a=1;}
    else
    {a=0;}
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            if(a==0)
            {a=1;}
            else
            {a=0;}
        }
        printf("\n");
    }
return 0;
}


    