#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);

    if (number == 0) {
    } else {
        int nume = number & -number;
        printf(" %d\n", nume);
    }

    return 0;
}
