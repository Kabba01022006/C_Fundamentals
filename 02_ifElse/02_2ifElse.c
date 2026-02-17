//ques - print the absolute value of a number.

// #include<stdio.h>
// int main(){
//        int n;
//        printf("Enter the number : ");
//        scanf("%d",&n);
//        if(n<0){
//         n = n * (-1);
//        }
//        printf("The absolute value is : %d",n);

//        return 0;
// }

#include<stdio.h>
int main(){
       int n;
       printf("Enter the number : ");
       scanf("%d",&n);
       if(n<0)
       {
              n=n*(-1);
              printf("%d",n);
       }
       else
       {
              printf("%d",n);
       }
       return 0;
}