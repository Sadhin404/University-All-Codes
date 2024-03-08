#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        if (arr[0] < arr[i]) {
            arr[0] = arr[i];
        }
    }

    printf("%d", arr[0]);

    return 0;
}
