//ques : Print the given pattern :
//1234
//123
//12
//1


#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows : ");
//     scanf("%d",&n);
//     for(int i=n;i>0;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
