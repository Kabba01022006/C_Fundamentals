#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17,18,19,20};
    int n= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int sumOfArr=0;
    int missingInteger;
    for(int i=0;i<n;i++){
        sumOfArr += arr[i] ;
    }
    for(int i=0;i<=n+1;i++){
        sum += i ;
    }
    missingInteger = sum - sumOfArr;
    printf("The missing integer is %d", missingInteger);
    return 0;
}