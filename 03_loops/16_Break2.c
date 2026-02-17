//Process: When i becomes 5, the printf executes first (printing "5"). Then, the if statement evaluates to true and triggers the break.

// Result: The value 5 is included in the output because the "stop" command happened after the "print" command.

// Output: 1 2 3 4 5

#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) 
    {

        printf("%d ", i);
        if (i == 5) {
            break;
        }
        
    }
    return 0;
}