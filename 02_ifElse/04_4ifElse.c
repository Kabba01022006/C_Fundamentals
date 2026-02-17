//ques - given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter.

#include<stdio.h>
int main()
{
    float length;
    printf("Enter the length of the rectangle : ");
    scanf("%f",&length);
    float breadth;
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&breadth);
    float area = length * breadth ;
    float perimeter = 2 *(length + breadth);

    if(area>perimeter){
        printf("Area > Perimeter");
    }
    else if(area<perimeter){
        printf("Area < Perimeter");
    }
    else {
        printf("Area = Perimeter");
    }

    return 0;

}