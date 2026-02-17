// In other languages ,  like java.

// if(condition)
//     statement;

// but in c/c++ , 
// if(expression)
//     statement;


// in c/c++ what is meant by expression is that whatever is inside our brackets (condition wala bracket) agar wo true hai i.e. it has a value other than 0 , it will execute the statement in that block , but if it is false , i.e. its value is 0 , it will not execute the statement in the block.

#include<stdio.h>
int main()
{
    if (100) { 
        printf("This will always print!\n"); 
    }

    if (3 + 2%5){
        printf("This works.\n"); // as 2%5 is 0 and 3+0 == 3 so its true.
    }
    if (-5) { 
        printf("Even this works.\n");
    }
    if ('A') { 
        printf("Even this works.\n");
    } // even characters as character have ASCII values.


    if (0) { 
        printf("This will never print."); 
    }
    return 0;
}

// it isnt necessary that it should be a condition that should be true , it can be any expression that is true !!!