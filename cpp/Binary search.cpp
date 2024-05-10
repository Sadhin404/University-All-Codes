#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter ARRAY Size:";
    cin >> n;
    int array[n];
    cout << "Enter ARRAY:";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int value;
    cout << "Enter search value:";
    cin >> value;

    int beg = 0;
    int end = n - 1;
    bool flag = false;

    while (beg <= end) {
        int mid_index = (beg + end) / 2;
        if (array[mid_index] == value) {
            flag = true;
            break;
        } else if (value > array[mid_index]) {
            beg = mid_index + 1;
        } else {
            end = mid_index - 1;
        }
    }

    if (flag) {
        cout << "Value found";
    } else {
        cout << "Not found";
    }

    return 0;
}
