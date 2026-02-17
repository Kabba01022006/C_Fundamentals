//ques - Display this AP   1,3,5,7,9... upuo 'n' terms.
//ques - pehle 100 odd numbers print karne hai to we will enter n=100.

// nth term = a + (n-1)d  where a is the first term and d is the common difference.
// so in this case , nth term = 2n-1

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);

//     for (int i=1;i<=(2*n)-1;i=i+2)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    int n;
    int a=1;
    printf("Enter n : ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        a=a+2;
        printf("%d\n",a);
    }
    return 0;
}