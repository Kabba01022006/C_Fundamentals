#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a; //we created a pointer variable named x
    //The value stored inside x is the memory address of a
    //We say that x "points to" a.

    printf("%p\n",x);//This prints the value stored inside x.
    //Since x was assigned &a, this will output the memory address of variable a.

    printf("%p\n",&x);//This prints the address of the pointer itself.

    printf("%d\n",*x);//*x means x ke andar jis bhi variable ka address stored hai , us variable ko point karo and uske andar jo value hai usko dikhado.
    *x = 7;
    printf("%d",*x);   // x ki value changed to 7

    return 0;
}   