#include <stdio.h>
#include <math.h>

int main() {
    float x, y, x0, y0, radius, distance;

    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &x, &y);

    printf("Enter the center of the circle (x0 y0) and radius: ");
    scanf("%f %f %f", &x0, &y0, &radius);

    distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0));

    if (distance == radius) {
        printf("The point is ON the circle.\n");
    } else if (distance < radius) {
        printf("The point is INSIDE the circle.\n");
    } else {
        printf("The point is OUTSIDE the circle.\n");
    }

    return 0;
}
