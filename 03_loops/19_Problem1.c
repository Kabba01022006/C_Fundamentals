//predict the output :
#include<stdio.h>
int main()
{
    int j;
    while(j<=10)
    {
        printf("\n%d",j);
        j=j+1;
    }
    return 0;
}


// our int j isnt initialized , therefore this code will not print any output.
// j ka dabba banega , we havent initialized j so j dabbe ke andar ek garbage value ajayegi.
//garbage value (random value)
// garbage value ke andar j ko 0 value bhi mil sakti hai , then our output will be 0 1 2 3 4 5 6 7 8 9 10

