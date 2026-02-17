//ques - Take 3 positive integers input and print the greatest of them.

#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);

    if (a>b && a>c ){
        printf("%d is greater than %d and %d.",a,b,c);
    }
    if (b>a && b>c){
        printf("%d is greater than %d and %d.",b,a,c);
    }
    if (c>a && c>b){
        printf("%d is greater than %d and %d.",c,a,b);
    }
    return 0;
}
