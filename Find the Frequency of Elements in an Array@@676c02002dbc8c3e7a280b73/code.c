#include <stdio.h>

int main() {
    int n;
    
    // Input size and array elements
    scanf("%d", &n);
    int arr[n];
    
    // Taking array input from the user
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding and printing frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;
        
        // Skip if the element has already been counted
        if (arr[i] == -1) continue;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // Mark as counted
            }
        }

        printf("%d %d", arr[i], count);
    }

    return 0;
}
