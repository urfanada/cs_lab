#include <stdio.h>

int main() {
    float radius, width, length, height;
    float diameter;

    printf("Enter the radius of the basketball: ");
    scanf("%f", &radius);
    
    printf("Enter the width, length, and height of the box: ");
    scanf("%f %f %f", &width, &length, &height);

    diameter = 2 * radius;

    if (diameter <= width && diameter <= length && diameter <= height) {
        printf("The basketball can fit in the box.\n");
    } else {
        printf("The basketball cannot fit in the box.\n");
    }

    return 0;
}
