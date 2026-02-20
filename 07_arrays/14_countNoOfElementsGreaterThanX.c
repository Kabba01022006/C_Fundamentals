// ques : Count the number of elements in given array grater then a given number x.

#include<stdio.h>
int main(){
    int x = 45;
    int arr[10] = {23,46,45,88,95,12,47,44,97,37};
    int count=0;
    for(int i=0;i<10;i++){
        if(arr[i]>45){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}