#include<stdio.h>
int main ()
{
    for (int i=1;i<=10;i=i+2){
        printf("hello world\n");
    }
}

// i=1 , prints hello world , i becomes 3
// i=3 , prints hello world , i becomes 5
// i=5 , prints hello world , i becomes 7
// i=7 , prints hello world , i becomes 9
// i=9 , prints hello world , i becomes 11
//no further printing as our condition i<=10 becomes false.

//but now if we check the value of i by printing it outside the loop , it should show 11 , but it itsnt true , it will give us an error "use of undeclared indentifier 'i'."
// this happens because scope of the variable , when a variable is created inside a loop or inside an if , its scope (its aukaat) is limited to that block only , not outside that block.

//Gemini explanation : 
//The Scope (Aukaat)
// You've hit on a very important programming concept. Because you declared int i inside the for loop initialization, it is considered a Local Variable to that loop.Block Scope: Any variable declared inside { } belongs only to that block. Once the program hits the closing }, that variable is "destroyed" to free up memory.Visibility: To the rest of the main() function, $i$ simply does not exist anymore.


// How to check $i$ outside the loopIf you actually want to see that 11, you have to declare $i$ before the loop starts. This moves its scope to the entire main() function.

// #include<stdio.h>

// int main ()
// {
//     int i; // Declared outside the loop
//     for (i = 1; i <= 10; i = i + 2){
//         printf("hello world\n");
//     }

//     // Now this will work!
//     printf("The final value of i is: %d", i);
//     // this will give us the value of i is 11. 
    
//     return 0;
// }

// for loop ---> for (initialisation ; condition ; increment/decrement/updation){
//     }