// #include<stdio.h>
// int main()
// {
//     int x = 5;
//     printf("%d\n",x);
//     printf("%d\n",x++);

//     x = 5;
//     printf("%d\n",x);
//     printf("%d\n",++x);
//     return 0;
// }


// x++ is post-increment --> it means that first use and then increment.
// ++x is pre-increment --> it means first increment and then use.

// x-- is post-decrement --> it means that first use and then decrement.
// --x is pre-decrement --> it means first decrement and then use. 

//even though waise x++ and ++x both mean x = x + 1
// similarly x-- and --x both mean x = x - 1 

//but the difference is the usage in the code.


//Post-increment (x++): The computer makes a temporary copy of the original value, increments the actual variable, and then uses that copy for the current task.
//Pre-increment (++x): The computer increments the actual variable first, and then uses the updated value for the task.





















#include<stdio.h>
int main()
{
    int x = 5;
    int a= x++;
    printf("%d\n",a);

    x = 5;
    int b=++x;
    printf("%d\n",b);

    return 0;
}