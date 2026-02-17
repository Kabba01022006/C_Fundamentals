#include<stdio.h>
int main(){
    char operator;
    float a,b;
    printf("Enter an operator : ");
    scanf("%c",&operator);
    printf("Enter first operand : ");
    scanf("%f",&a);
    printf("Enter second operand : ");
    scanf("%f",&b);

    switch (operator) 
    {
        case '+':
        printf("%f + %f = %f",a,b,a+b);
        break;

        case '-':
        printf("%f - %f = %f",a,b,a-b);
        break;

        case '*':
        printf("%f * %f = %f",a,b,a*b);
        break;

        case '/':
        printf("%f / %f = %f",a,b,a/b);
        break;
        
        default:
        printf("Incorrect operator.");

    }
    return 0;
    
}