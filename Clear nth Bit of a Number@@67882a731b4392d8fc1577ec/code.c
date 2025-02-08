#include <stdio.h>

int main() {
    int number, n;
    
    scanf("%d", &number);
    
    scanf("%d", &n);

    number = number & ~(1 << n);

    printf("%d\n",  number);a

    return 0;
}
