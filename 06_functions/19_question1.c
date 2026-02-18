//Ques : Write a function to compute the greatest common divisor of two given numbers.

#include<stdio.h>
#include<math.h>
int min(int x, int y){
    if(x<y) return x;
    else return y;
}
int gcd(int x, int y){
    int hcf;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            hcf = i;
        }
    }
    //OR for(int i=min(x,y);i>=1;i--){  // ulta start kar rahe hai 
    //   if(x%i==0 && y%i==0){
    //       hcf = i;
    //       break;
    //  }
    // }
    return hcf;
}
int main(){
    int a;
    int b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("The HCF/GCD of %d and %d is : %d",a,b,hcf);
    return 0;;
}