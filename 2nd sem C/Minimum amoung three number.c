#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b) {
        if (a < c) {
            printf("A is minimum");
        } else {
            printf("C is minimum");
        }
    } else {
        if (b < c) {
            printf("B is minimum");
        } else {
            printf("C is minimum");
        }
    }
    
    return 0;
}
