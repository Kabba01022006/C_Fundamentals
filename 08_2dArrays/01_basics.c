// int arr[3][5] = {{1,2,3,4,5},
//                 {6,7,8,9,10},
//                 {11,12,13,14,15}};

// datatype arrayname[rows][columns]

#include<stdio.h>
int main(){
    int arr[2][2];
    arr[0][0]=1;
    arr[0][1]=2;
    arr[1][0]=3;
    arr[1][1]=4;
    // 1 2
    // 3 4

    int firstArr[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",firstArr[i][j]);
        }
        printf("\n");
    }
    return 0;
}