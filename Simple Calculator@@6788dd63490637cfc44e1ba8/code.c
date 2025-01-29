#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    char c;
    scanf("%c",&c);
    if(c =='+'){
        printf("%d",a+b);
    }
    else if(c == '-'){
        printf("%d",a-b);
    }
    else if(c == '*'){
        printf("%d", a*b);
    }
    else if (c == '/') {
        if (b != 0) { 
            printf("%d", a / b);
        } else {
            printf("Error: Division by zero");
        }
    }
    else{
        printf("Error");
    }
    return 0;
}