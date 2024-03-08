#include <stdio.h>

int main() {
    int i, n;
    int tl = 0, t2 = 1;
    int nextTerm = tl + t2;
    scanf("%d", &n);
    printf("%d %d ", tl, t2);
    for (i = 3; i <= n; ++i) {
        nextTerm = tl + t2;
        printf("%d ", nextTerm);
        tl = t2;
        t2 = nextTerm;
    }
    return 0;
}
