#include <stdio.h>
#include <stdlib.h> 

int main() {
    int number, digit1, digit2, digit3;
    int max_product = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    number = abs(number);

    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10;


    if (digit1 ==0)
    {
        max_product = digit2 * digit3;
    }
    else if (digit2 ==0)
    {
        max_product = digit1 * digit3;
    }
    else if (digit3 ==0)
    {
        max_product = digit1 * digit2;
    }
    else
    {
        max_product = digit1 * digit2 * digit3;
    }
    

    printf("Maximum product of the digits: %d\n", max_product);

    return 0;
}
