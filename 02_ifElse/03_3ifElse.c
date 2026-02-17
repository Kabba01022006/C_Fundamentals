//ques - if cosr price and selling price of an item is input through the keyboard , write a program to determine whether the seller has made profit or incurred loss.Also determine how much profit he made or loss he incurred.

#include<stdio.h>
int main(){
    int cp;
    int sp;
    printf("Enter the cost price : ");
    scanf("%d",&cp);
    printf("Enter the selling price : ");
    scanf("%d",&sp);
    int profit = sp - cp;
    int loss = cp - sp;
    
    if (cp>sp){
        printf("Loss : %d",loss);
    }
    else if (cp<sp){
        printf("Profit : %d",profit);
    }
    else {
        printf("No profit No loss.");
    }

    return 0;

}