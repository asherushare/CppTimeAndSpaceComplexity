#include <stdio.h>

int main() {
    int num, digit, sum = 0, product = 1;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Ensure the integer is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Calculate the sum and product of digits
    while (num > 0) {
        digit = num % 10;
        sum += digit;                  //Time complexity is O(1)
        product *= digit;              //Space complexity is also O(1)
        num /= 10;
    }

    // Calculate the result (difference)
    int result = product - sum;

    // Output the result
    printf("The difference between the product and sum of the digits is: %d\n", result);

    return 0;
}
