#include <stdio.h>
int main()
{
    int x = 5;
    printf("%d",x); //5
    x=x-3;
    printf("\n%d",x); //2
    x=x+99;
    printf("\n%d",x); //101

    int a = 5;
    int b = 2;
    int c = a/b; 
    printf("\n%d",c);  //2 , not 2.5 as it is int.
    float d = a/b;
    printf("\n%d",d); // we will get 0 because we used %d to print a float but %d (format specifier) is used to print int , for printing float , %f is used. 
    printf("\n%f",d); // we will get 2.00000 here because our a and b are integer and when we divide integer by integer , we get an integer , so integer 5 / integer 2 , gives us some integer i.e. 2 and when we store this value inside the float variable , we get 2.0000.  
    float p = 5;
    float q = 2;
    float r = p/q;
    printf("\n%f",r); // this will give us 2.5 i.e. 2.50000 as we divided float by float and giving us a float. 

    
    
    //when we do int c = 5/2 , this gives us 2 as 2 is an int , this is wrong , instead in coding , when you divide int by an int , you get int , so 5/2 gives us 2. 

    int l = 5;
    float m = 2;
    float n = l/m;
    printf("\n%f",n); // any one needs to be float as int/float = float , float/int = float and float/float = float

    return 0;


}