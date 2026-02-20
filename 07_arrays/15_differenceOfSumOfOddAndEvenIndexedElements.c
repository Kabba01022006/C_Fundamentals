//ques : Find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<stdio.h>
int main(){
    int arr[10] = {23,53,68,23,62,1,47,32,67,69};
    int sumEven=0;
    int sumOdd=0;
    int diff;
    for(int i=0;i<10;i++){
        if(i%2==0){
            sumEven=sumEven+arr[i];
        }
        else if(i%2!=0){
            sumOdd=sumOdd+arr[i];
        }
    }
    diff=sumEven-sumOdd;
    printf("%d",diff);
    return 0;
}