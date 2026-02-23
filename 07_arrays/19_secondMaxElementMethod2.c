//Ques : print the second max element of the array.

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int max=INT_MIN;
    int smax=INT_MIN;    // smax means second max
    for(int i=0;i<10;i++){
        if (max < arr[i]){
         max = arr[i];
        }
    }
    for(int i=0;i<10;i++){
        if(smax < arr[i] && arr[i] != max){
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}

// This code does not work when the maximum element appears more than once.
//for example for array : {10,10,9,8} , where the answer should be 9 , the output will be 10.