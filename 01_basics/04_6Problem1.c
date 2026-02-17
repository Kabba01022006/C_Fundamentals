//ques - Take integer as input and print half of the number.

#include<stdio.h>
int main()
{
    float num;
    printf("Enter the integer : ");
    scanf("%f",&num);
    float ans = num / 2;
    printf("The half of the entered number %f is %f.",num,ans);
    return 0;
}