#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(isPrime(a)){
        printf("Prime");
    }
    else{
        printf("Not Prime")
    }
    return 0;
}