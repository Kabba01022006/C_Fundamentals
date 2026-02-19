#include<stdio.h>
int main(){
    // ques : Calculate the product of all the ements in the given array.
    int product=1;
    int arr[5] = {12,6,84,2,1};
    for(int i=0;i<5;i++){
        product=product*arr[i];
    }
    printf("%d",product);
    return 0;
}