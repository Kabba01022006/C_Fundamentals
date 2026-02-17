//ques : print the given pattern : 

//   A
//  AB
// ABC
//ABCD     :Alphabet triangle

#include<stdio.h>

int main() {
    int n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        int a=65;
        for(int j=n-1;j>=i;j--)
        {
            printf(" ");
        }

        for(int k=1;k<=i;k++)
        {
            // char ch =(char)a;
            // printf("%c",ch);   OR 
            printf("%c",a);
            a++;
        }

        printf("\n");

    }


    return 0;
} 