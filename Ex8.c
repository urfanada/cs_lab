#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the length of stick 1: ");
    scanf("%f", &a);
    
    printf("Enter the length of stick 2: ");
    scanf("%f", &b);
    
    printf("Enter the length of stick 3: ");
    scanf("%f", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Yes, the sticks can form a triangle.\n");
    } else {
        printf("No, the sticks cannot form a triangle.\n");
    }

    return 0;
}
