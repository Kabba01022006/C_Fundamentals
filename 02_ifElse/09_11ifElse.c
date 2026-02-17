// ques - grading system , 81-100  A
// 61-80 B 
// 40-60 C
// <40 Fail

// ans - this ques can be easily done by if else if else ladder , but we will try to do it by using nested if else. 

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    if(marks>100){
        printf("Invalid Marks");
    }
    
    else if (marks>=40){
        if (marks>80 && marks<=100){printf("A");}
        else if(marks>60 && marks<=80){printf("B");}
        else if(marks>=40 && marks<=60){printf("C");}
    }
    
    else{
        printf("FAIL");
    }
    return 0;
}