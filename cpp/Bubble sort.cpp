#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter ARRAY Size:";
    cin >> n;

    int* array = new int[n];
    cout << "Enter ARRAY:";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    delete[] array; 
    return 0;
}
