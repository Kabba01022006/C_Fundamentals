#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int revarr[5];
    for(int i=0;i<5;i++){
        revarr[i]=arr[4-i];
    }
    for(int i=0;i<5;i++){
        printf("%d ",revarr[i]);
    }
    return 0;
}