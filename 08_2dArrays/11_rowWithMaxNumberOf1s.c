//ques : Given a matrix having only 0s and 1s , find the row number having the maximum 1s.

#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5][5] = {
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,0,0,0},
        {0,0,0,0,0},
        {0,1,0,1,0}
    } ;
    int rowIndex;
    int maxCount = INT_MIN;
    int count;
    for(int i=0;i<5;i++){
        count = 0;
        for(int j=0;j<5;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>maxCount){
            maxCount=count;
            rowIndex = i;
        }
    }
    printf("Max number of 1s : %d\n",maxCount);
    printf("Row number : %d",rowIndex);
    return 0;
}