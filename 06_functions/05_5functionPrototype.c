#include<stdio.h>

//void fun();           ----> this is the best way to use function prototype
int main()
{
    void fun(); // this is function prototype, without this line, our code will give error.
    fun();
    return 0;
}

void fun(){
    printf("Hello");
}

// enter the protoype just before calling that function.


//even though we can type the prototype just before calling that function, but in general it is the best practice to type the prototype even before writing the main function.