#include<stdio.h>
int main()
{
    int i;
    while(i=10)
    {
        printf("%d\n",i);
        i=i+1;  
    }
    return 0;
}

//this will also give us an infinite loop printing 10 10 10 10 10....... as here also the value 10 get assigned in each and every iteration and the code in infinite due to the 2 reasons given in the previous code.