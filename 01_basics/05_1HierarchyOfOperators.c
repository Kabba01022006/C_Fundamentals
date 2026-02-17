// 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5/8 
// to solve such eqautions , firstly sepearate the equation first by + and - , so itll become. 
// 2*3/4  +  4/4  + 8 - 2 +  5/8 
// now in programming we if its like ; 
// int i = 2*3/4  +  4/4  + 8 - 2 +  5/8 
// if we do (2*3)/4 , this will give us 1 , not 1.5 as its int.
// if we do 2*(3/4) , this will give us 0 , as this gives us 2*0  , not 2*0.75 as it is int. 
// so in programming , what we do is to ; 
// first separate the equation with + and - ; 
// and then move from LEFT to RIGHT.
// so the ans of this equation will be 8. 

#include<stdio.h>
int main()
{
    int i = 2 * 3 / 4 + 4 / 4 + 8 - 2 + 5/8 ; 
    printf("%d",i);
    return 0;
}