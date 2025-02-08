#include <stdio.h>
int main(){
    unsigned int number;
    scanf("%u",&number);
    unsigned int sum=~number;
    printf("%u\n",sum);
    return 0;
}