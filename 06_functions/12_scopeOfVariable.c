#include <stdio.h>

int add() {
    int x = 10;   // x is created inside add()
    return x;
}

int main() {
    int y = 20;   // y is created inside main()
    printf("%d\n", y);   // ✅ works

    // printf("%d\n", x);  ❌ ERROR (x is not visible here)

    return 0;
}
