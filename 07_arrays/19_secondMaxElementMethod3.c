//Ques : print the second max element of the array.

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10] = {34,27,11,46,55,69,7,84,99,10};
    int max=INT_MIN;
    int smax=INT_MIN;    // smax means second max
    for(int i=0;i<10;i++){
        if (max<arr[i]){
            smax=max;   // smax is now previous max
            max=arr[i]; // max is now a new max
        }
        else if (smax<arr[i] && max!=arr[i]){
            smax=arr[i];
        }
    }
    printf("%d\n",max);
    if (smax == INT_MIN)
    printf("No second maximum exists");
    else
    printf("%d", smax);

    return 0;
}