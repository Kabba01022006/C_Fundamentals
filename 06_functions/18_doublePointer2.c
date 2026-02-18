#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    int** y = &x;
    printf("%d\n",a);
    printf("%d\n",*x);
    // if there was *y , it will give us the memory address of the pointer x.
    printf("%d\n",**y);//means y pe jo address hai uspe jao , aur fir waha pe jo address pada hai uspe jao aur uski value ko print kardo (double pointer)

    // we can further make triple pointer and more...
    return 0;
}