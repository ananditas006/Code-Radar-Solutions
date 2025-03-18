#include <stdio.h>

int main() {
    int n;

    // Input number of rows for the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop to print the pyramid pattern
    for (int i = 1; i <= n; i++) {
        // Loop for spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Loop to print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
