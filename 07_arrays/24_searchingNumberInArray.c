#include<stdio.h>
#include<stdbool.h>
//ques : Given array, and a number 'x'. Find out if 'x' lies in the array or not, if yes then print the index.
int main(){
    int arr[10] = {1,2,3,4,69,6,7,8,9,10};
    int x = 69;
    bool flag = false;
    int idx = 1234;   // this idx (meaning index) will change so we can keep it as anything.
    for(int i=0;i<10;i++){
        if(arr[i] == x){
            flag = true;
            idx = i;
            break;
        }
        else{
            flag = false;
        }
    }
    if (flag==false)
        printf("%d does not exist in this array.",x);
    else if(flag ==true)
        printf("%d exists in this array and its index is %d",x,idx);
//we created a separate variable idx to store the index , but what we can do is that declare int i outside for loop and then initialize it in for loop and the use arr[i].
    return 0;
}