#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    

    int nume = number & -number;

    printf("%d\n",  nume);

    return 0;
}
