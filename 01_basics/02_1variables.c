#include<stdio.h>
int main(){
    printf("Hello world\n");
    int x;
    x=5;
    // printf(x); This will give error.
    printf("%d",x);
    return 0;
    // %d is used for int 
}

// 1. variables can start from an alphabet or underscore.
// 2. special character except _ are not allowed.
// 3. variables cannot start from a number.***
// 4. special keywords (built in keywords) cannot be used.
// 5. commas or blanks aren't allowed in variables.
// 6. Variables are case sensitive.  

// the c files name with the extension .c are not considered as an identifier or a variable , so we can use a number in the start to name them.