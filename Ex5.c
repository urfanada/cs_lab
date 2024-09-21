#include <stdio.h>
#include <stdlib.h>  // For abs() function

int main() {
    int number, digit1, digit2, digit3;
    int max_digit, min_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    number = abs(number);

    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;

    max_digit = min_digit = digit1;

    if (digit2 > max_digit) max_digit = digit2;
    if (digit3 > max_digit) max_digit = digit3;

    if (digit2 < min_digit) min_digit = digit2;
    if (digit3 < min_digit) min_digit = digit3;

    printf("Greatest digit: %d\n", max_digit);
    printf("Smallest digit: %d\n", min_digit);

    return 0;
}
