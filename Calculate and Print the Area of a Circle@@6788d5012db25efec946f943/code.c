#include <stdio.h>
#include <math.h>  

int main() {
    float r;
    scanf("%f", &r);
    
    float a = M_PI * r * r;  
    
    printf("Area: %.2f\n", a);  
    
    return 0;
}
