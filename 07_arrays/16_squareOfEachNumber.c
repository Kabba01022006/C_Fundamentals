
#include<stdio.h>
int main(){
    //ques : square each element of an array.
    int arr[10] = {2,5,8,3,6,1,7,9,11,12};
    // int sumEven=0;
    // int sumOdd=0;
    // int diff;
    for(int i=0;i<10;i++){
        arr[i] = arr[i]*arr[i];
        printf("%d\n",arr[i]);
    }
    
    return 0;
}