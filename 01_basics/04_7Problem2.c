//ques - Take float input and print the fractional part of the real number.

// #include <stdio.h>
// int main()
// {
//     float inp;
//     printf("Enter the float number : ");
//     scanf("%f",&inp);
//     int integerPart = inp;
//     float fractionalPart = inp - integerPart;
//     printf("The fractional part of the entered number is : %f",fractionalPart);
//     return 0;
// }


//ques - Take float input and print the fractional part of the number.

#include<stdio.h>
int main()
{
    float n;
    printf("Enter the number : ");
    scanf("%f",&n);
    int a = (int)n;   //this is typecasting.
    printf("%d",a);
}






