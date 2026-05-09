#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //this next snippet is heart of the code.
    // For transpose, swap arr[i][j] with arr[j][i] only once.
    // So traverse either upper triangle (j > i) or lower triangle (j < i), not the whole matrix.
    // Traversing whole matrix swaps elements twice and brings them back to original position.
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){          
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 

    return 0;
}