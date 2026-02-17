//ques - Take 3 numbers input and tell if they can be the sides of a triangle.And then what type of triangle it is.

// in this code we used nested if-else.

#include<stdio.h>
int main()
{
    int a;
    int b; 
    int c;
    printf("Enter the first side : ");
    scanf("%d",&a);
    printf("Enter the second side : ");
    scanf("%d",&b);
    printf("Enter the third side : ");
    scanf("%d",&c);

    if (a+b==c || a+c==b || b+c==a) {
        printf("These sides cannot form a triangle.\n");
    }
    else if (a+b<c || a+c<b || b+c<a){
        printf("These sides cannot form a triangle.\n");
    }
    else{
        printf("These sides can form a triangle.\n");
        if (a==b && b==c && a==c) {
        printf("It is an equilateral triangle.");
    }
    else if (a!=b && a!=c && b!=c){
        printf("It is a scalene triangle.");
    }
    else{
        printf("It is an isoceles triangle.");
    }
    }
    return 0;
    
}