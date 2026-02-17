//ques : Print the given pattern : 
//   *
//  ***
// *****
//*******
// *****
//  ***
//   *             star diamond.

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    int nsp = n / 2; // initial spaces
    int nst = 1;     // initial stars

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= nsp; j++) 
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++) 
        {
            printf("*");
        }
        if (i<(n/2)+1) //means i is upper half (middle line not included)
        {
            nsp--; // spaces decrease in upper half
            nst += 2; // stars increase by 2
        } else  
        {
            nsp++; // spaces increase in lower half
            nst -= 2; // stars decrease by 2
        }
        printf("\n");
    }
    return 0;
}