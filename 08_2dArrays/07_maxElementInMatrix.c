#include<stdio.h>
#include<limits.h>
int max = INT_MIN;
int main(){
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
        printf("\n");
    }
    printf("%d",max);

    return 0;
}