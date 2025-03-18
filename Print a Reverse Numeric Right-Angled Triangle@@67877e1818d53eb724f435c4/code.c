#include <stdio.h>

int main() {
    int n;

    // Input the number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (int i = n; i >= 1; i--) {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

