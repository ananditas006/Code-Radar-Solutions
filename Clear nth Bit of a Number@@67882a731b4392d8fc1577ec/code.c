#include <stdio.h>

int main() {
    int number, n;
    
    scanf("%d", &number);
    
    scanf("%d", &n);

    int nume = number & ~(1 << n);

    printf("%d\n",  nume);

    return 0;
}
