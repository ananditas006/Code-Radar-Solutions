#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);  // Add a space before %c to skip any leading whitespace characters
    if(ch == 'R') {
        printf("Stop");
    }
    else if(ch == 'G') {
        printf("Go");
    }
    else if(ch == 'Y') {
        printf("Slow Down");
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}
