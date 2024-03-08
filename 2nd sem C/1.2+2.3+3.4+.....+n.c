#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    float r = 0;
    
    for (int i = 1; i <= n; i++) {
        r += i + 0.1 * (i + 1);
    }

    printf("%.1f", r);

    return 0;
}
