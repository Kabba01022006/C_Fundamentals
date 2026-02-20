//ques : Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include<stdio.h>
int main(){
    int arr[10] = {41,28,32,43,57,66,79,80,97,101};
    for(int i=0;i<10;i++){
        if(i%2!=0){
            arr[i] = 2*arr[i]; // or arr[i]*=2;
        }
        else if(i%2==0){
            arr[i]=10+arr[i]; // or arr[i]+=2;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}  