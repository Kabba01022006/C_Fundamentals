//ques : Print the given pattern 

//1
//35
//7911
//13151719   odd floyds triangle. 


#include<stdio.h>
int main()
{
    int n;
    int a=1;
    printf("Enter the number of rows : "); //enter odd numbers only.
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",a);
            a+=2;
        }
        printf("\n");
    }
return 0;
}
    