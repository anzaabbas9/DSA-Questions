
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
// delete at begning
void delete_at_beg(){
    if(head==nullptr){
        cout<<"empty !!";
    }
        node* temp=head;
     if(head==tail){
        head=nullptr;
        tail=nullptr;
    }else{
    head=head->next;
    head->prev=nullptr;}
    delete temp;
}
//delete at end
void delete_at_end(){
       node* temp=tail;
        if(head==nullptr){
        cout<<"list is empty !!";
    }else if(head==tail){
        head=tail=NULL;
    }
    else{
       tail->prev->next=nullptr;
       tail=tail->prev;
       delete temp;

}}
//delete at a position
void delete_at_pos() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    int pos, count = 0;
    node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Enter position you want to delete: ";
    cin >> pos;

    if (pos < 1 || pos > count) {
        cout << "Invalid position!\n";
        return;
    }

    if (pos == 1) {
        delete_at_beg();
        return;
    }

    if (pos == count) {
        delete_at_end();
        return;
    }

    temp = head;

    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;
}
// delete after position
void delete_after_pos() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }

    int pos, count = 0;
    node* temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Enter position after which you want to delete: ";
    cin >> pos;

    if (pos < 1 || pos >= count) {
        cout << "Invalid position! No node exists after this position.\n";
        return;
    }

    temp = head;

    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }

    node* current = temp->next;

    temp->next = current->next;

    if (current->next != NULL) {
        current->next->prev = temp;
    }
    else {
        tail = temp;
    }

    delete current;
}
//reverse list
void reverse(){
    if(head==NULL){
        cout<<"list is empty!!";
    }
     node*temp=head;
    node*next_node=NULL;
    while(temp!=NULL){
        next_node=temp->next;
       temp->next=temp->prev;
       temp->prev=next_node;
       temp=next_node;
    }
    temp=head;
    head=tail;
    tail=temp;

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

    /*display();

    insert_at_beg();
    display();

    insert_at_end();
    display();

    insert_at_pos();
    display();

    insert_after_pos();
    display();

    delete_at_beg();
    display();

    delete_at_end();
    display();

    delete_at_pos();
    display();

    delete_after_pos();
    display();*/

    reverse();
    display();

    return 0;
}
