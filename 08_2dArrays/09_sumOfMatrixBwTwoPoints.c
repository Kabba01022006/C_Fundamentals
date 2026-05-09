// ques : Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

/*
PROBLEM: SUB-MATRIX EXTRACTION
Given a matrix 'a' of dimension n x m and 2 coordinates (l1, r1) and (l2, r2),
print the sub-matrix from (l1, r1) to (l2, r2).

Matrix 'a':
[
  [10, 20, 30, 40],
  [50, 60, 70, 80],
  [90, 10, 11, 12],
  [13, 14, 15, 16]
]

Coordinates:
(l1, r1) = (1, 1)
(l2, r2) = (3, 2)

Expected Output:
60 70
10 11
14 15
*/

#include<stdio.h>
int main(){
    int mat[4][4] = 
  {{10, 20, 30, 40},
  {50, 60, 70, 80},                     
  {90, 10, 11, 12},
  {13, 14, 15, 16}} ;
   
  for(int i=1;i<=3;i++){
    for(int j=1;j<=2;j++){
        printf("%d ",mat[i][j]);
    }
    printf("\n");
  }
    return 0;
}