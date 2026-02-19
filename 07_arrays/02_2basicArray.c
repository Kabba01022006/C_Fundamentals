// using loops for input and output of array.
#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
    printf("Enter element number %d : ",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //print in reverse order 
    for(int i=9;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
