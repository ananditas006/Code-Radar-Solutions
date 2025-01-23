#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b){
        printf("Loss");
    }
    else if (b>a){
        printf("Profit");
    }
    else{
        ("No Profit No Loss");
    }
    return 0;
}