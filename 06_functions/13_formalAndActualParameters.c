#include <stdio.h>

int add(int x, int y) // x and y are formal parameters
{
    return (x+y);
}

int main()
{
    int a=add(5,10);// 5 and 10 → actual parameters (arguments)
    printf("%d",a);
    return 0;
}
