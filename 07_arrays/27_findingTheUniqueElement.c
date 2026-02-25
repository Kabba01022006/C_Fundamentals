//ques : Find the unique number in a given array where all the elements are being repeated twice with one value being unique.

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[11] = {1,3,6,1,1,2,3};
    for(int i=0;i<11;i++){
        bool flag = false;
        for(int j=i+1;j<11;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag==false){
            printf("%d is the unique number",arr[i]);
            break;
        }
    }
    return 0;
}