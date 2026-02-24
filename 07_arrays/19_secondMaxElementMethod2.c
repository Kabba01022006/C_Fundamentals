//Ques : print the second max element of the array.

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {5,5,5,5,5};
    //INT_MIN is the minimum integer possible 
    int max=INT_MIN;  
    int smax=INT_MIN;    // smax means second max
    for(int i=0;i<5;i++){
        if (max < arr[i]){
         max = arr[i];
        }
    }
    for(int i=0;i<5;i++){
        if(smax < arr[i] && arr[i] != max){
            smax = arr[i];
        }
    }
    //****the fix to the issue written below
    if(smax==INT_MIN){
        printf("No second maximum");
    }
    else
    printf("%d",smax);
    //**** 
    return 0;
}

// This code does not work when all elements are the same.
//i.e. it will give the value of int_min as smax.
