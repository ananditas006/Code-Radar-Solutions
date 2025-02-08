#include <stdio.h>

int main() {
    int number, n;
    
    scanf("%d", &number);
    
    scanf("%d", &n);

    int nthBit = (number >> n) & 1;

    printf("%d\n",  nthBit);

    return 0;
}
