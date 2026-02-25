//ques : Write a program to find a duplicate element from a given array of integers.

#include<stdio.h>
int main(){
    int arr[10] =  {34,45,234,32,8,9,44,234,12,65};
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element.",arr[i]);
                break;
            }
        
        }
    }
    return 0;
}