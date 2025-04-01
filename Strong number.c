#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, originalNumber, remainder, sum = 0;


    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber > 0) {
        remainder = originalNumber % 10;
        sum += factorial(remainder);
        originalNumber /= 10;
    }

    if (sum == number) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}
