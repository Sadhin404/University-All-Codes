#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter ARRAY Size:";
    cin >> n;

    int array[n];
    int flag = 0;
    cout << "Enter ARRAY:";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int value;
    cout << "Enter search value:";
    cin >> value;

    for(int i = 0; i < n; i++) {
        if(array[i] == value) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout << "Value found";
    } else {
        cout << "Value not found";
    }

    return 0;
}
