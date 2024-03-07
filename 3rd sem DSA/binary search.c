#include <stdio.h>

int main() {
    int n;
    printf("Enter ARRAY Size:");
    scanf("%d", &n);
    int array[n];
    printf("Enter ARRAY:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int value;
    printf("Enter search value:");
    scanf("%d", &value);

    int beg = 0;
    int end = n - 1;
    int flag = 0;

    while (beg <= end)
    {
        int mid_index = (beg + end) / 2;
        if (array[mid_index] == value)
         {
            flag = 1;
            break;
         }
        else if (value > array[mid_index])
         {
            beg = mid_index + 1;
         }
        else
         {
            end = mid_index - 1;
         }
    }


    if (flag == 1) {
        printf("Value found");
    } else {
        printf("Not found");
    }

    return 0;
}
