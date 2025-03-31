#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;
    
    // Input size and array elements
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    // Count even and odd numbers
    for (int i = 0; i < n; i++) 
        (arr[i] % 2 == 0) ? evenCount++ : oddCount++;

    // Output the result
    printf("%d %d\n", evenCount, oddCount);
    return 0;
}
