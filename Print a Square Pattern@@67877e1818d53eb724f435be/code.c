#include<stdio.h>

int main() {
    int i, j, n;
    
    // Input the size of the square
    scanf("%d", &n);
    
    // Outer loop to control the rows
    for(i = 1; i <= n; i++) {
        // Inner loop to print stars in each row
        for(j = 1; j <= n; j++) {
            printf("*");
        }
        // Move to the next line after printing all stars in the row
        printf("\n");
    }
    
    return 0;
}
