//ques - Write a program to take a positive integer input and check if it is divisivle by 5 or 3 but not by 15.

// this question can be easily done with || and && logical operators. 

// if (n%5==0 || n%3==0 && n%15!=0) --- this is wrong
// if ((n%5==0 || n%3==0) && n%15!=0) --- this is right.

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n%5==0 || n%3==0)
    {
        if (n%15!=0){
            printf("The number is divisble by 5 or 3.");
        }
        else{
            printf("The number is divisible by 15.");
        }
        
    }

    else{
        printf("The number is not divisible by 5 or 3.");
    }
    return 0;
} 