//What is an array ? 
//An array is a collection of multiple data items of the same type stored in contiguous (back-to-back) memory locations.

#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,1}; //declaring and itializing an array in a single line.
    //5 dabbe (5 memory locations) integer dabbe created.
    //2 is on 0 index. (arr[0]=2)
    //4 is on 1 index. (arr[1]=4)
    //6 is on 2 index. (arr[2]=6)
    //8 is on 3 index. (arr[3]=8)
    //1 is on 4 index. (arr[4]=1)

    // if size of array is n so index goes from 0 to (n-1)

    //accessing elements of array
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);

    //changing elements in an array.
    arr[4]=10;  // 1 has now became 10
    printf("%d\n",arr[4]);
    printf("%d\n",arr[-1]);     //this will give us an "index out of bounds warning or error and in some compilers give us a garbage value."

    float a[3] = {1.2,3.4,5.7};
    printf("%f\n",a[2]);

    char b[5] = {'a','%','b','Y','5'};
    printf("%c\n",b[1]);

    //another way of initializing an array is to do it element by element.
    int c[5]; //declared

    c[0] = 1;
    c[1] = 3;
    c[2] = 5; 
    c[3] = 7;
    c[4] = 9;
    printf("%d\n",c[0]);
    printf("%d\n",c[1]);
    printf("%d\n",c[2]);
    printf("%d\n",c[3]);
    printf("%d\n",c[4]);

    //taking array as an input (element by element)
    int inpArr[5];
    printf("Enter first element : ");
    scanf("%d",&inpArr[0]);
    printf("Enter second element : ");
    scanf("%d",&inpArr[1]);
    printf("Enter third element : ");
    scanf("%d",&inpArr[2]);
    printf("Enter fourth element : ");
    scanf("%d",&inpArr[3]);
    printf("Enter fifth element : ");
    scanf("%d",&inpArr[4]);

    //printing elements of array one by one
    printf("%d\n",inpArr[0]);
    printf("%d\n",inpArr[1]);
    printf("%d\n",inpArr[2]);
    printf("%d\n",inpArr[3]);
    printf("%d\n",inpArr[4]);

    return 0;

}