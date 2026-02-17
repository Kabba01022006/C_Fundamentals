#include<stdio.h>
int main()
{
    int x , y , sum; 
    printf("Enter the first number : \n");
    scanf("%d",&x);
    printf("Enter the second number : \n");
    scanf("%d",&y);
    sum = x+y;
    printf("The sum of the numbers that you gave is %d.",sum);
    return 0;
}