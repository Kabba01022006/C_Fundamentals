// A switch case is a control statement used to select one of many code blocks to be executed. It is often used as a cleaner, more efficient alternative to a long if-else if-else ladder when you are comparing a single variable against multiple fixed values.

#include<stdio.h>
int main()
{
    int a=5;
    switch (a)
    {
        case 1: printf("this is 1"); break;
        case 2: printf("this is 2"); break;
        case 3: printf("this is 3"); break;
        case 4: printf("this is 4"); break;
        case 5: printf("this is 5"); break;
        case 6: printf("this is 6"); break;
        case 7: printf("this is 7"); break;
        case 8: printf("this is 8"); break;
        case 9: printf("this is 9"); break;
        case 10: printf("this is 10"); break;
        default:printf("incorrect number.");
        
    }
    return 0;
}