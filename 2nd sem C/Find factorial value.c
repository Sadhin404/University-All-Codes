#include<stdio.h>

int main() {
    int n, fact = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("Factorial is %d", fact);
    return 0;
}
