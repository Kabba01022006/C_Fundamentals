//ques - print all the odd numbers from 1 to 100 in different lines.

// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=100;i++)
//     {
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i=i+2)
    {
        printf("%d\n",i);
    }
    return 0;
}