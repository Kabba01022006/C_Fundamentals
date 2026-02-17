// //ques - If the ages of Ram ,Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three. 

// // do with if else (dont do with logical operators)

// #include<stdio.h>
// int main()
// {
//     int Ram;
//     int Shyam;
//     int Ajay;

//     printf("Enter the age of Ram : ");
//     scanf("%d",&Ram);
//     printf("Enter the age of Shyam : ");
//     scanf("%d",&Shyam);
//     printf("Enter the age of Ajay : ");
//     scanf("%d",&Ajay);

//     if (Ram<Ajay)
//     {
//         if(Ram<Shyam){
//             printf("Ram is youngest.");
//         }

//         else if(Shyam<Ram){
//             printf("Shyam is youngest.");
//         }
//     }
//     else if(Ajay<Ram){
//         if(Ajay<Shyam){
//             printf("Ajay is youngest.");
//         }
//         else if(Shyam<Ajay){
//             printf("Shyam is youngest.");
//         }
//     }
    
//     return 0;

// }














#include<stdio.h>
int main()
{
    int Ram;
    int Shyam;
    int Ajay;

    printf("Enter the age of Ram : ");
    scanf("%d",&Ram);
    printf("Enter the age of Shyam : ");
    scanf("%d",&Shyam);
    printf("Enter the age of Ajay : ");
    scanf("%d",&Ajay);

    if(Ram<Shyam && Ram<Ajay)
    {
        printf("Ram is youngest.");
    }
    else if(Shyam<Ram && Shyam<Ajay)
    {
        printf("Shyam is youngest.");      
    }
    else if(Ajay<Shyam && Ajay<Ram)
    {
       printf("Ajay is youngest."); 
    }

    return 0;

}




