#include <stdio.h>
int main(){
    unsigned int number;
    scanf("%u",&number);
    int sum= __builtin_clz(number)
    printf("%d",sum);
    return 0;
}