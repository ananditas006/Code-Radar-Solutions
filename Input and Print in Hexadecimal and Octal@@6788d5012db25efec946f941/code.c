#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    printf("Hexadecimal: %X\n", (int)ch);
    printf("Octal: 0%o\n",(int)ch);
    return 0;
}