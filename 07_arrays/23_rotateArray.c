//ques : Rotate the given array 'a' by k steps, where k is non-negative.
//note : k can be greater than n as well where n is the size of array 'a'.

//for such rotating questions, just do (number of rotations) % (array length)
    // so k = k % n ;

    //so steps to rotate the given array by k steps is : 
    //1) if k>n , k=k%n , we'll get a smaller k.
    //2) reverse full array (0,n-1)
    //3) reverse the array till k elements i.e.(0,k-1)
    //4) reverse the rest of the array, i.e. (k,n-1)
    // we'll get the desired output.

#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7; //size of array
    int k = 3;
    //expected output is : {5,6,7,1,2,3,4}
    //first step : k=k%3 if k>n;
    k=k%n;
    //first step is to reverse the full array.
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //second step is to reverse the array till k.
    for(int i=0,j=k-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    //last step is to reverse the rest of the array.
    for(int i=k,j=n-1;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]); //will give the correct output 5,6,7,1,2,3,4.
    }

    return 0;
}