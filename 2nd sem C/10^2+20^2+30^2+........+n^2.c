#include<stdio.h>

int main() {
    int n, r = 0;
    scanf("%d", &n);
    
    for (int i = 10; i <= n; i = i + 10) {
        r = r + i * i;
        printf("%d ", r);
    }
    
    return 0;
}
