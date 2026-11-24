/*#include<iostream>
using namespace std;
struct node{
int data;
node* next=NULL;
};
node* head=NULL;
node* temp=NULL;
//create cll using head only
void create(){
    node* new_node=new node;
    cout<<"enter data :";
    cin >> new_node->data;
    if(head==0){
        head=temp=new_node;
    }
    else{
        temp->next=new_node;
        temp=new_node;
    }temp->next=head;
}
//display cll using head only
void display(){
    if(head==NULL){
        cout<<"list is empty!";
    }
    temp=head;
   do{
        cout<<temp->data<<" ";
        temp=temp->next;
    } while(temp!=head);
}
int main(){
    int x;
    cout<<"how many nodes you want to create:";
    cin>>x;
    for(int i=1;i<=x;i++){
    create();
    }
    display();
}*/
//*******************************************************************************************
/*#include<iostream>
using namespace std;
struct node{
int data;
node* next=NULL;
};
node* head=NULL;
node* tail=NULL;
node* temp=NULL;
//create cll using head and tail
void create(){
    node* new_node=new node;
    cout<<"enter data :";
    cin >> new_node->data;
    if(head==0){
        head=tail=new_node;
    }
    else{
        tail->next=new_node;
        tail=new_node;
    }tail->next=head;
}
//display cll using head and tail
void display() {
    if (head == NULL) {
        cout << "List is empty!";
        return;
    }

    node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}
int main(){
    int x;
    cout<<"how many nodes you want to create:";
    cin>>x;
    for(int i=1;i<=x;i++){
    create();
    }
    display();
}*/
//*******************************************************************************************
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next = NULL;
};
node *tail = NULL;
node *temp = NULL;
// create cll using head and tail
void create()
{
    node *new_node = new node;
    cout << "enter data :";
    cin >> new_node->data;
    if (tail == NULL)
    {
        tail = new_node;
        tail->next = tail;
    }
    else
    {
        new_node->next = tail->next;
        tail->next = new_node;
        tail = new_node;
    }
}
// insert at begning
/*void insert_at_beg(){
    node*new_node=new node;
      cout << "Enter data: ";
    cin >> new_node->data;
    if(tail==NULL){
        tail=new_node;
        tail->next=tail;
    }
    else{
        new_node->next=tail->next;
        tail->next=new_node;
    }

}
//insert at end
void insert_at_end(){
    node*new_node=new node;
      cout << "Enter data: ";
    cin >> new_node->data;
    if(tail==NULL){
        tail=new_node;
        tail->next=tail;
    }
    else{
        new_node->next=tail->next;
        tail->next=new_node;
        tail=new_node;
    }}
    //insert at position
void insert_at_pos(){
    temp=tail->next;
    int pos,i=1,count=0;
    cout<<"enter position :";
    cin>>pos;
    do{
        temp=temp->next;
        count++;}while(tail!=temp);
    if(pos<=0||pos>count){
        cout<<"invalid position!!";
    }
    if(pos==1){
        insert_at_beg();
        return;
    }
    if(pos==count+1){
        insert_at_end();
    return;}
           node*new_node=new node;
             cout << "Enter data: ";
    cin >> new_node->data;
           while(i<pos){
            temp=temp->next;
            i++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}*/

// delete from begning
void delete_at_beg()
{
    if (tail == NULL)
    {
        cout << "list is empty!";
        return;
    }
    else if (tail == tail->next)
    {
        delete tail;
        tail = NULL;
        return;
    }
    else
    {
        temp = tail->next;
        tail->next = temp->next;
        delete temp;
    }
}
// delete from end
void delete_at_end()
{
    if (tail == NULL)
    {
        cout << "list is empty!";
        return;
    }
    else if (tail == tail->next)
    {
        delete tail;
        tail = NULL;
        return;
    }
    else
    {
        node *current = tail->next;
        temp = tail;
        while (current->next != tail)
        {
            current = current->next;
        }
        current->next = temp->next;
        tail = current;
        delete temp;
    }
}
// delete from position
void delete_at_pos()
{
    if (tail == NULL)
    {
        cout << "List is empty!";
        return;
    }

    int pos, i = 1, count = 0;

    temp = tail->next;

    do
    {
        count++;
        temp = temp->next;
    } while (temp != tail->next);

    cout << "Enter position: ";
    cin >> pos;

    if (pos < 1 || pos > count)
    {
        cout << "Invalid position!";
        return;
    }

    if (pos == 1)
    {
        delete_at_beg();
        return;
    }

    if (pos == count)
    {
        delete_at_end();
        return;
    }

    temp = tail->next;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    node *current = temp->next;
    temp->next = current->next;

    delete current;
}
// reverse list
void reverse()
{
    if (tail == NULL)
    {
        cout << "list is empty!!";
        return;
    }
    else if (tail == tail->next)
    {
        return;
    }
    else
    {
        node *first = tail->next;
        node *current = first;
        node *prev = tail;
        node *next_node = NULL;

        while (current != tail)
        {
            next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
        }

        current->next = prev;
        tail = first;
    }
}
// display cll using head and tail
void display()
{
    if (tail == NULL)
    {
        cout << "List is empty!";
        return;
    }

    node *temp = tail->next;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);

    cout << endl;
}
int main()
{
    int x;

    cout << "How many nodes do you want to create: ";
    cin >> x;
    if (x <= 0)
    {
        cout << "Number of nodes must be greater than zero.";
        return 0;
    }
    for (int i = 1; i <= x; i++)
    {
        create();
    }

    cout << "Original list: ";
    display();

    cout << "Reverse list: ";
    reverse();
    display();

    cout << "delete at beginning:\n";
    delete_at_beg();
    display();

    cout << "delete at end:\n";
    delete_at_end();
    display();

    cout << "delete at position:\n";
    delete_at_pos();
    display();

    return 0;
}