#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars in the current row
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;
    
    // Input number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    // Print the pyramid pattern
    printPyramid(n);

    return 0;
}
