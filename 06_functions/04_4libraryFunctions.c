// library functions : are basically in-built functions.

//for ex : printf , scanf , sqrt , pow(2,5)

#include<stdio.h>
#include<math.h> // this thing imports the C standard mathematics library which provides declarations for common mathematical functions and constants that are not built into the core language.
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int root =sqrt(a);
    printf("The square root is : %d",root);
    return 0;
}