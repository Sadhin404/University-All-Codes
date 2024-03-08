#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i = i + 2) {
        sum = sum + i;
    }

    printf("%d", sum); // Print the sum after the loop completes

    return 0;
}
