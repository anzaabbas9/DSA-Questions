
#include <iostream>
using namespace std;

struct node {
    int data;
    node* prev = NULL;
    node* next = NULL;
};

node* head = NULL;
node* tail = NULL;

// Create a node at the end
void create() {
    node* new_node = new node;

    cout << "Enter data you want to store: ";
    cin >> new_node->data;

    if (head == NULL) {
        head = tail = new_node;
    }
    else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

// Insert at beginning
void insert_at_beg() {
    node* new_node = new node;

    cout << "Enter data you want to store: ";
    cin >> new_node->data;

    if (head == NULL) {
        head = tail = new_node;
    }
    else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

// Insert at end
void insert_at_end() {
    node* new_node = new node;

    cout << "Enter data you want to store: ";
    cin >> new_node->data;

    if (head == NULL) {
        head = tail = new_node;
    }
    else {
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}

// Insert at a specific position (1-based)
void insert_at_pos() {
    int pos, count = 0;

    node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Enter position where you want to insert: ";
    cin >> pos;

    if (pos < 1 || pos > count + 1) {
        cout << "Invalid position!\n";
        return;
    }

    if (pos == 1) {
        insert_at_beg();
        return;
    }

    if (pos == count + 1) {
        insert_at_end();
        return;
    }

    node* new_node = new node;
    cout << "Enter value you want to insert: ";
    cin >> new_node->data;

    temp = head;

    for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
    }

    new_node->next = temp->next;
    new_node->prev = temp;

    temp->next->prev = new_node;
    temp->next = new_node;
}

// Insert after a specific position
void insert_after_pos() {
    int pos, count = 0;

    node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Enter position after which you want to insert: ";
    cin >> pos;

    if (pos < 1 || pos > count) {
        cout << "Invalid position!\n";
        return;
    }

    temp = head;

    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }

    node* new_node = new node;

    cout << "Enter value you want to insert: ";
    cin >> new_node->data;

    new_node->prev = temp;
    new_node->next = temp->next;

    if (temp->next != NULL) {
        temp->next->prev = new_node;
    }
    else {
        tail = new_node;
    }

    temp->next = new_node;
}

// Display the list
void display() {
    node* temp = head;

    cout << "Doubly linked list: ";

    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {
    int n;

    cout << "How many nodes do you want to create? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        create();
    }

    display();

    insert_at_beg();
    display();

    insert_at_end();
    display();

    insert_at_pos();
    display();

    insert_after_pos();
    display();

    return 0;
}
