//ques - Take a positive integer input and tell if it is a three digit number or not.

//ans - logic - if it is a three digit number , then it is greater than 99 and less than 1000. 

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
    
//     if (n>99 && n<1000){
//         printf("It is a three digit number.");
//     }
//     else{
//         printf("It is not a three digit number.");
//     }
//     return 0;
// }





#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int sample =n;
    
    while(sample!=0)
    {
        sample=sample/10;
        count=count+1;
    }
    
    if(count==3) printf("It is a three digit number.");
    else printf("It is not a three digit number.");

    return 0;
}