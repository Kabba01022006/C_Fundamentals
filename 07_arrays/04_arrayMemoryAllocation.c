
// ARRAY MEMORY PROPERTIES:
// 1. Contiguous: Elements are stored in side-by-side memory locations.
// 2. Base Address: arr[0] represents the starting memory location.
// 3. Offset Math: Address of arr[i] = BaseAddress + (i * 4 bytes).
// 4. Fixed Size: Total bytes = array.length * 4 (for integers).

#include<Stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("%p\n",&arr[i]);
    }
    printf("These memory locations are contiguous(meaning continuous)");
    return 0;
}