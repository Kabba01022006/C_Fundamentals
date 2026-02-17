// ques - Write a program to print sum of all the even digits of a given number.

// #include<stdio.h>
// int main()
// {
//     int n;
//     int sum = 0;
//     int digit;
//     printf("Enter the number : ");
//     scanf("%d",&n);

//     while (n!=0)
//     {
//         digit = n % 10;
//         if (digit % 2 != 0)
//         {
//             digit = 0;
//             n =  n / 10;
//             sum = sum + digit;
//         }
//         else 
//         {
//             n =  n / 10;
//             sum = sum + digit;
//         }
//     }
        
//     printf("%d",sum);

    
//     return 0;
// }


// this is the simplified version of this code . (easier , less time complexity etc nd all.)
#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int digit;
    printf("Enter the number : ");
    scanf("%d",&n);

    while (n!=0)
    {
        digit = n%10;
        if (digit % 2 == 0)
        {
            sum = sum + digit;
        }
        n = n / 10;
    }  
    printf("%d",sum);
    return 0;
}