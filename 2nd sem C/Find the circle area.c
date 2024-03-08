#include <stdio.h>

int main() {
    float radius, area;
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    printf("Area of circle : %.2f\n", area);
    return 0;
}
