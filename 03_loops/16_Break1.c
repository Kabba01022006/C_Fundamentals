// When a break statement is triggered inside a loop, the program exits the loop immediately without executing the remaining statements in that iteration.


// in this code whether its gonna print 1 2 3 4 5 or 1 2 3 4 only depends on where our print statement is . this page has output 1 2 3 4 as print statement is after the break statement. on the next code output is 1 2 3 4 5 as the print statement is written before the break statement . 



//this code
// Process: When i becomes 5, the if statement evaluates to true, the break executes, and the program exits the loop immediately.

// Result: The printf is skipped for the number 5.

// Output: 1 2 3 4 


#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) 
    {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
    }
    return 0;
}