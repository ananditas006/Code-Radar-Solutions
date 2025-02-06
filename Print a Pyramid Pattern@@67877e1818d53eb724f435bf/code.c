#include <stdio.h>

int main() {
    int i, j, n;

    // Get the number of rows for the pyramid
    printf(" ");
    scanf("%d", &n);

    // Loop through rows
    for(i = 1; i <= n; i++) {
        // Print spaces before stars
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
