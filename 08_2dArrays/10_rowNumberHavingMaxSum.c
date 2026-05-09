#include<stdio.h>
#include<limits.h>
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
    int maxSum = INT_MIN;
    int sum;
    int rowIndex;
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(sum>maxSum){
            maxSum=sum;
            rowIndex = i;
        }
    }
    printf("Row Index : %d\n",rowIndex);
    printf("Row sum : %d",maxSum);
    return 0;
}