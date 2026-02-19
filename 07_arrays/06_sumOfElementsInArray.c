#include<stdio.h>
int main(){
    //ques : Calculate the sum of all the elements in the given array.
    int arr[5] = {4,24,56,33,17};
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}