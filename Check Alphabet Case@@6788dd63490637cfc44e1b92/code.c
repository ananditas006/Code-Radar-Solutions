#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&a);
    if(ch>='a'&& ch<='z'){
        printf("Lowercase");
    }
    else if(ch>='A'&& ch<='Z'){
        printf("Uppercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}