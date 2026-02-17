// ques - Print hello world 'n' times , take 'n' as input from user.

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter how many times would you like the text printed : ");
    scanf("%d",&n);

    for (int i=1;i<=n;i=i+1){
        printf("hello world\n");
    }
    return 0;
}

// instead of writing i=i+1 , we can write i+=1 , and also i++