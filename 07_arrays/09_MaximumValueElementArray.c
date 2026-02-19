#include <stdio.h>
int main(){
    //ques : Find the maximum value out of all the elements in the array.
    int arr[5] = {12,45,56,33,1};
    int maxElem=arr[0]; //or we can put here minimum int i.e. -2147483648 by using int max = INT_MIN and #include<limits.h>
    for(int i=0;i<5;i++){
        if(maxElem < arr[i]){
            maxElem = arr[i];
        }
    }
    printf("%d",maxElem);
    return 0;
}