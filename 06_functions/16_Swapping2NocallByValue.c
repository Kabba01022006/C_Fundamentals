#include<stdio.h>

void swap(int x, int y){
    int temp = x;
    x=y;
    y=temp;
    return;
}

int main(){
    int a;
    int b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    swap(a,b);
    printf("a is : %d\nb is : %d",a,b);
    return 0;
}