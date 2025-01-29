#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)  // Numbers less than or equal to 1 are not prime
        return 0;

    // Check divisibility from 2 to num-1
    for (int i = 2; i < num; i++) {
        if (num % i == 0)  // If divisible by any number other than 1 and itself
            return 0;  // It's not a prime
    }

    return 1;  // It's a prime number
}

int main() {
    int num;

    // Take user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display if the number is prime
    if (isPrime(num)) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
