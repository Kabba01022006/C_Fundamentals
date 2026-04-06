//ques - print the table of 19.

//the first code is uneffecient and doing a lot of unnecessary work.
// #include<stdio.h>
// int main()
// {
//     for(int i=19;i<=190;i++)
//     {
//         if(i%19==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {   
//     for(int i=19;i<=190;i=i+19)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {   
//     int count=0;
//     for(int i=19;i<=190;i=i+19)
//     {
//         count=count+1;
//         printf("19 x %d = %d\n",count,i);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
int a = 19;
for(int i=1;i<=10;i++){
    printf("%d\n",i*a);
}
}     //in this code we can change the value of a according to the table that we need 
