//ques : Given an array of marks or students, if the mark of any student is less than 35 print its roll number.[roll number here referrs to the index of the array.]

#include<stdio.h>
int main(){
    int marks[10] = {23,34,35,36,41,50,48,43,17,8};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d\n",i);//this will print all indices where i<35
            //if we wanted to print marks, then 
            //printf("%d\n",marks[i]);
        }
    }
    return 0;
}
