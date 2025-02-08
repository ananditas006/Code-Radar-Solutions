#include <stdio.h>
int main(){
    unsigned int number;
    scanf("%u",&number);
    unsigned int sum=~number;
    printf("%u",sum);
    return 0;
}