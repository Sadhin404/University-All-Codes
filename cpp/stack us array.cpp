#include <iostream>
using namespace std;

class Stack {
public:
    int arr[100];
    int top;
    
    bool isEmpty() {
        return (top == -1);
    }

    void push(int value) {

        arr[++top] = value;
        cout << value << " pushed" << endl;
    }

    int pop() {
        return arr[top--];
    }

    int peek() {
        return arr[top];
    }
};

int main() {
    Stack stack;

    stack.push(5);
    stack.push(10);
    stack.push(15);

    cout << "Top element: " << stack.peek() << endl;

    cout << stack.pop() << " popped from stack." << endl;
    cout << stack.pop() << " popped from stack." << endl;

    cout << "Top element: " << stack.peek() << endl;

    stack.push(20);
    cout << "Top element: " << stack.peek() << endl;

    return 0;
}
