//ques : Write a program to reverse the array without using any extra array.

#include<stdio.h>
int main(){
    int arr[5]={12,45,33,23,94};
    int i=0;
    int j=4;
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int k=0;k<5;k++)
    printf("%d ",arr[k]);
    return 0;
}
// can be done by for loop using for(int i=0,j=6 ; i<j ; i++,j--)