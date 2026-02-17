#include<stdio.h>
int main()
{
    float radius;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    float pi = 3.1415;
    float area = pi * radius * radius;
    printf("The area of the circle is : %f",area);
    return 0;
}
// & basically means the memory location , so if we say &x , it means memory location of x , so when we write , 
// int x ;
// scanf("%d",&x); 
// this basically means that take the input x and store it inside the memory location of x . 