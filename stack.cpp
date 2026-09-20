#include <iostream>
using namespace std;

const int SIZE = 5;
int top = -1;
int stack[SIZE];

void push();
void pop();
void peek();
void display();

int main() {
    int ch;

    do {
        cout << "\nMenu:\n";
        cout << "1. push()\n";
        cout << "2. pop()\n";
        cout << "3. peek()\n";
        cout << "4. display()\n";
        cout << "0. exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!!\n";
        }
    } while (ch != 0);

    return 0;
}

void push() {
    int x;

    if (top >= SIZE - 1) {
        cout << "Overflow!!\n";
        return;
    }

    cout << "Enter value to insert: ";
    cin >> x;
    top++;
    stack[top] = x;
    cout << "Inserted: " << x << endl;
}

void pop() {
    int item;

    if (top == -1) {
        cout << "Underflow!!\n";
        return;
    }

    item = stack[top];
    cout << "Popped item is: " << item << endl;
    top--;
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty\n";
        return;
    }

    cout << "Top item is: " << stack[top] << endl;
}

void display() {
    if (top == -1) {
        cout << "Stack is empty!!\n";
        return;
    }

    cout << "Stack: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}
