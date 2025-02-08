#include <stdio.h>
int main(){
    unsigned int a,b;
    scanf("%u",&a);
    scanf("%u",&b);
    unsigned int sum= a^b;
    printf("%u",sum);
    return 0;
}