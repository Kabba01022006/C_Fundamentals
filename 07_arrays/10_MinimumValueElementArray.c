#include<stdio.h>
int main(){
    int arr[10] = {12,4,5,-5,-18,-8,36,124,66,0};
    int minElem = arr[0];
    for(int i=0;i<10;i++){
        if(minElem>arr[i]){
            minElem=arr[i];
        }
    }
    printf("%d",minElem);
    return 0;
}