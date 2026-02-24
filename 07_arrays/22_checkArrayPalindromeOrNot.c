//ques : If an array arr contains n elements , then check if the given array is a palindrom or not.

#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,69,3,2,1};
    int i=0;
    int j=6;
    int flag = 1; // assume palindrome
    while(i<j){
        if(arr[i]!=arr[j]){
        flag = 0;
        break;
        }
        i++;
        j--;  
    }
    if(flag==1)
        printf("Array is a palindrome");
    else if(flag==0)
        printf("Array is not a palindrome");
    
    return 0;
}