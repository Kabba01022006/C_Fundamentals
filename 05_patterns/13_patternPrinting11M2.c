//ques : print the given pattern.

// ABCD
// ABCD
// ABCD
// ABCD    Hint -ASCII value of 'A' is 65.

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        int a = 65;
        for (int j = 1; j <= n; j++) 
        {
            printf("%c", a);
            a = a + 1;
        }
        printf("\n");
    }

    return 0;
}
