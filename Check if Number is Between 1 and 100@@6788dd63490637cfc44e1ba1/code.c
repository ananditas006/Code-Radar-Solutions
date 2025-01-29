#include <stdio.h>

int main() {
    int a;
    if (scanf("%d", &a) != 1) {
        printf("Invalid Input");
        return 1;  
    }
    
    if(a >= 1 && a <= 100) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }
    return 0;
}
