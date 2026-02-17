#include<stdio.h>
int main()
{
    void fun(); // without this line, our code will give error.
    fun();
    return 0;
}

void fun(){
    printf("Hello");
}

// enter the protoype just before calling that function.
