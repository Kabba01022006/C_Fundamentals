//ques - Display this ap   4,7,10,13,16.... upto 'n' terms.

//so nth term = a+(n-1)d
// = 4 +(n-1)3 => 4+3n-3 => 3n+1

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);

//     for (int i=4;i<=(3*n)+1;i+=3)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;
    int a=4;
    printf("Enter n : ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        a=a+3;
        printf("%d\n",a);
    }
    return 0;
}