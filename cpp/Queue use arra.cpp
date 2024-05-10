#include <iostream>
using namespace std;

int queue[100], n = 100, front = -1, rear = -1;

void Insert(int val) {
     {
        front = 0;
        rear++;
        queue[rear] = val;
    }
}

void Delete() {
        cout << "deleted : " << queue[front] << endl;
        front++;
    }

void Display() {

        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
}

int main() {
    Insert(4);
    Insert(5);
    Insert(6);
    Insert(7);
    Insert(8);
    Delete();
    Delete();
    Display();
    return 0;
}
