#include <iostream>
using namespace std;

struct node {
    int data;
    node *next;
};

int main() {
    node  *first=new node;
    node *second = new node;
    node *third = new node;
    node * node1=new node;
    node * node2=new node;

    first->data = 1;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = -5;
    third->next = NULL;
    node* head=first;
    int count=0;
//insert node at front
    cout<<"enter value to insert at front :";
cin>>node1->data;
node1->next=head;
head=node1;
//insert node at end
cout<<"enter value to insert at end :";
cin>>node2->data;
node *temp = head;
while(temp->next!=NULL){
    temp=temp->next;
    count++;
}temp->next=node2;
temp=head;
count++;

//insert value after a position
temp=head;
int pos;
cout<<"enter position where you want to insert:";
cin>>pos;
if(pos>count){
    cout<<"invalid position"<<endl;
}
else{
    node* node3=new node;
    cout<<"Enter value to insert after some position :";
    cin>>node3->data;
    int i=1;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    node3->next=temp->next;
    temp->next=node3;

}

//display linked list
temp=head;
    cout << "linked_list is: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    delete first;
    delete second;
    delete third;
    delete node1;
    delete node2;

    return 0;
}
