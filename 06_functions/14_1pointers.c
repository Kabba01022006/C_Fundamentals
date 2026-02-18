// pointers -> stores the address of a variable.
#include<Stdio.h>
int main(){
    int a = 5;
    int b = 5;
    printf("%p\n",&a);//this prints the address of variable a.
    printf("%p",&b);  
    //%p is the format specifier used in the printf and scanf functions to handle pointer addresses.
    return 0;
}  