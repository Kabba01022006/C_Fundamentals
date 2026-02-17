#include<stdio.h>
int main()
{
    int x = 4,y,z; // x ke dabbe mein 4 , y , z ka dabba khali.
    y = --x;  //pre-decrement so sabse pehle x ki value 4 se 3 hogi and then it will get stored in y , so now x has become 3 and y ke andr 3.
    z = x--; //post-decrement , so idhar x ki current value ka hai 3 , wo sbse pehle z mein daaldo , so z wale dabbe mein 3 ajayega and then decrement so now x ki value becomes 3 se 2.
    printf("\n%d%d%d",x,y,z);
    //guessed output : 2,3,3  
    return 0;
}
