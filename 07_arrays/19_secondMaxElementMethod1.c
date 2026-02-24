//Ques : print the second max element of the array.

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6] = {90,12,34,56,4,34};
    int max=arr[0];
    int smax=arr[0];    // smax means second max
    for(int i=0;i<6;i++){
        if (max < arr[i]){
         max = arr[i];
        }
    }
    for(int i=0;i<6;i++){
        if(smax < arr[i] && arr[i] != max){   
            smax = arr[i];
        }
    }
    printf("%d\n",max);
    printf("%d",smax);
    return 0;
}

// This code does not work when the maximum element appears more than once OR maximum element is the first element of the array.