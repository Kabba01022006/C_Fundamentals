//ques : Find the total number of pairs in the array whose sum is equal to the given value x.

#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int x=12;
    int pairs=0;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x){
                pairs+=1;
            }
        }
    }
    printf("%d",pairs);
    return 0;
}