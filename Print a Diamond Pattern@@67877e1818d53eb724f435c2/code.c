#include <stdio.h>
int main() {
    int i, j, num;
    printf("ENTER NO OF ROWS: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        for(j = 1; j <= num - i; j++) {
            printf(" ");
        }
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i = num - 1; i >= 1; i--) {
        
        for(j = 1; j <= num - i; j++) {
            printf(" ");
        }
        
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
