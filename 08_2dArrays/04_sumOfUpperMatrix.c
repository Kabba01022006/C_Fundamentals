#include<stdio.h>
int main(){
    int sum=0;
    int matrix[5][5]=
    {{60, 28, 83, 62, 55},
    {85, 10, 17, 86, 13}, 
    {56, 78, 33, 67, 12}, 
    {12, 85, 20, 55, 37}, 
    {91, 92, 62, 37, 56}};

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            sum+=matrix[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}