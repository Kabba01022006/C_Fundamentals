#include<stdio.h>
void fun(int a[]){
    a[0] = 10;
    return;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[0]);    // this is 1
    fun(arr);
    printf("%d\n",arr[0]);   // this should be 10 (but we didnt use pointers)
    return 0;
}

/* In C, passing an array to a function automatically passes a pointer to its first element. 
This is called "array-to-pointer decay," meaning the function receives the actual memory 
address of the data rather than a copy. Any changes made using arr[i] inside the function 
directly modify the original array in memory.
*/