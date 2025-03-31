#include<stdio.h>
#include<limits.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest=INT_MIN;
    int slargest=INT_MIN;
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }else if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }
    if(slargest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", slargest);  // Output the second largest element
    }

    return 0;
}