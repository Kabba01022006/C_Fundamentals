#include <stdio.h>
int main()
{
    int p,q;
    printf("Enter values of p and q : ");// we can enter the values of p and q as we want , with spaces , without spaces , pressing enter as many times as you want , it wont give error as it ignores all these lines until you enter the second number. (it will recognize the first and the second numnr only and ignore all whitespace charachters.)
    scanf("%d%d",&p,&q);
    printf("p=%d q=%d",p,q);
    return 0;
}