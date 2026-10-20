#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    node *first = new node;
    node *second = new node;
    node *third = new node;

    first->data = 1;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = -5;
    third->next = NULL;
    node* head=first;

    node *temp = head;

    cout << "linked_list is: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    delete first;
    delete second;
    delete third;

    return 0;
}