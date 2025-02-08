#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Read input number

    // If number is 0, the MSB is not set
    if (a == 0) {
        printf("Not Set");
        return 0;
    }

    // Shift to find MSB
    int msbPosition = 0;
    while (a != 0) {
        a >>= 1;  // Right shift
        msbPosition++;  // Count shifts
    }

    printf("Set");  // Position of MSB (0-indexed)
    
    return 0;
}
