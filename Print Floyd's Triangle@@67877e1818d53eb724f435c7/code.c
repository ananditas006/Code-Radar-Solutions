#include <stdio.h>

int main() {
    int n, num = 1;

    // Input the number of rows for Floyd's Triangle
    scanf("%d", &n);

    // Outer loop for the rows
    for (int i = 1; i <= n; i++) {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment the number after printing it
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
