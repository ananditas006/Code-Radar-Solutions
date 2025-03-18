#include <stdio.h>
#include <string.h>

void printPyramid(char str[]) {
    int len = strlen(str);
    for (int i = 1; i <= len; i++) {
        for (int j = 0; j < len - i; j++) {
            printf(" ");
        }
        
        // Print the string part for this level
        for (int k = 0; k < i; k++) {
            printf("%c", str[k]);
        }
        
        // Move to the next line
        printf("\n");
    }
}

int main() {
    char str[100];
    
    // Input the string for pyramid pattern
    printf("Enter a string: ");
    scanf("%s", str);
    
    // Print the pyramid pattern
    printPyramid(str);
    
    return 0;
}
