#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int main()
{
    int res;
    int x=3,y=4;
    res=add(x,y);
    printf("%d",res);
    return 0;
}

// #include <stdio.h>

// void changeValue(int a) {
//     a = 50; 
// }

// int main() {
//     int n = 20;
//     changeValue(n);
//     printf("%d", n);
//     return 0;
// }