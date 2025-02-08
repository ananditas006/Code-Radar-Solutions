#include <stdio.h>
int main(){
    unsigned int a;
    scanf("%u",&a);
    unsigned int sum= ~a;
    printf("%u",sum);
    return 0;
}