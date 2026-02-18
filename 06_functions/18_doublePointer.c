#include<Stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    *x=7; //a ki value jo 25 thi , now wo is changed to 7  (***VERY IMP***)
    printf("%p\n",x);//this prints the address of a.
    printf("%p\n",&x);//this prints the address of the pointer variable x.
    // int* y = &x; // y is a pointer variable that stores the address of pointer variable x. but this will give us a warning , so 
    int** y = &x;
    // we need to use int** as int** -> int*(pointer variable) ka address store krta hai. 
    printf("%p\n",y);
    printf("%d\n",**y);
    return 0;
}