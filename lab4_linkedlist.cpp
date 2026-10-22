
#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

// Insert at beginning
void insert_at_beg() {
    node* new_node = new node;

    cout << "Enter a value to insert: ";
    cin >> new_node->data;

    new_node->next = head;
    head = new_node;
}

// Insert at end
void insert_at_end() {
    node* new_node = new node;

    cout << "Enter value you want to insert: ";
    cin >> new_node->data;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return;
    }

    node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

// Insert at a position (positions start from 1)
void insert_at_pos() {
    int pos;
    cout << "Enter position where you want to insert: ";
    cin >> pos;

    if (pos < 1) {
        cout << "Invalid position!\n";
        return;
    }

    if (pos == 1) {
        insert_at_beg();
        return;
    }

    node* temp = head;

    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position!\n";
        return;
    }

    node* new_node = new node;

    cout << "Enter value you want to insert: ";
    cin >> new_node->data;

    new_node->next = temp->next;
    temp->next = new_node;
}

// Delete at beginning
void delete_at_beg() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    node* first = head;
    head = head->next;
    delete first;
}

// Delete at end
void delete_at_end() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    node* temp = head;
    node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    delete temp;
}

// Delete at a position (positions start from 1)
void delete_at_pos() {
    int pos;

    cout << "Enter position you want to delete: ";
    cin >> pos;

    if (pos < 1 || head == NULL) {
        cout << "Invalid position or empty list!\n";
        return;
    }

    if (pos == 1) {
        delete_at_beg();
        return;
    }

    node* temp = head;

    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position!\n";
        return;
    }

    node* tail = temp->next;
    temp->next = tail->next;
    delete tail;
}

// Display linked list
void display() {
    node* temp = head;

    cout << "Linked list: ";

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

//reverse a linked list
void reverse(){
    node* prevnode = NULL;
    node* currentnode = head;
    node* nextnode = NULL;
    while (currentnode != NULL) {
        nextnode=currentnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;

    }head=prevnode;
    }

int main() {
    int choice=0;

    do {
        cout << "\n===== LINKED LIST MENU =====\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Insert at position\n";
        cout << "4. Delete at beginning\n";
        cout << "5. Delete at end\n";
        cout << "6. Delete at position\n";
        cout << "7. Reverse linked list\n";
        cout << "8. Display linked list\n";
        cout << "9. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insert_at_beg();
                display();
                break;

            case 2:
                insert_at_end();
                display();
                break;

            case 3:
                insert_at_pos();
                display();
                break;

            case 4:
                delete_at_beg();
                display();
                break;

            case 5:
                delete_at_end();
                display();
                break;

            case 6:
                delete_at_pos();
                display();
                break;

            case 7:
                reverse();
                display();
                break;

            case 8:
                display();
                break;

            case 9:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 9);

    return 0;
}