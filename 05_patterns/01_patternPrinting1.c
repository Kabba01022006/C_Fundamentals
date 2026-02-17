//ques : print the given pattern.
//      ****
//      ****
//      ****

#include<stdio.h>
int main ()
{
    int m;
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for (int i=1;i<=m;i++)
    {
        for (int i=1;i<=n;i++)
        {
            printf("*");
        }   
        printf("\n");//har line ke baad ek enter maarne ke liye hai.
    }
    return 0;
}

//outer loop : number of lines = number of rows.
//inner loop : number of stars = number of columns.


// prefer that you dont use iterator 'i' in both the loops , prefer to use i for rows and j for columns.