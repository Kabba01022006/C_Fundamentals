// ques : Print the given pattern.
    // ****
    // ***
    // **
    // *         Star Triangle Ulta



//this is probably the best approach as its easier and we can make the mathematical interpretation for any other pattern as well
// i + jmax = n + 1   always
// so jmax = n + 1 - i
// means j will always go from j = 1 to n+1-i
#include<stdio.h>
int main(){
    int n;
    printf("Enter rows : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int n;    
//     printf("Enter rows : ");
//     scanf("%d",&n);

//     for(int i=n;i>0;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n;    
//     printf("Enter rows : ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=n;j>=i;j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

