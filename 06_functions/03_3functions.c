#include<stdio.h>

int add(int num1,int num2)   // int is the return type of this function
// int num1 and int num2 are paramters .
{       
    return num1+num2;
}


int main(){
    int a;   // let suppose we input 12 
    int b;   // let suppose we input 13
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    int sum = add(a,b);   // passing 12 and 13 (pass by value)
    //Arguments : The actual values , here like a and b i.e. 12 and 13 are passed into the function when it is called.
    printf("%d",sum);

    return 0;
}