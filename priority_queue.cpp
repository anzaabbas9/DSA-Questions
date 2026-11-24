
#include <iostream>
using namespace std;

#define N 5
int q[N];
int p[N];
int count=0;
void enqueue(int x,int y){
    if(count==N){
        cout<<"overflow";
    }
    else{
        q[count]=x;
        p[count]=y;
        count++;
    }
}
void dequeue(){
    if(count==0){
        cout<<"queue is empty!!";
        return;
    }
    int highest=0;
    for(int i=1;i<count;i++){
        if(p[i]>p[highest])
        highest=i;
    }
    cout<<"deleted element:"<<q[highest]<<endl;

    for(int i=highest;i<count-1;i++){
        q[i]=q[i+1];
        p[i]=p[i+1];
    }count--;
}

void peek(){
    if(count==0){
        cout<<"queue is empty!!";
        return;
    }
    int highest=0;
    for(int i=1;i<count;i++){
        if(p[i]>p[highest])
        highest=i;
    }cout<<"highest priority element is:"<<q[highest]<<endl;
}

void display(){
    if(count==0){
        cout<<"queue is empty!!";
        return;
    }
    else{
    cout<<"Queue is:"<<endl;
        for(int i=0;i<count;i++){
            cout<<q[i]<<'\t'<< p[i]<<endl;
        }
    }
}
int main() {
    enqueue(10, 2);
    enqueue(20, 5);
    enqueue(30, 5);
    enqueue(40, 4);

    cout << "\nOriginal Queue:\n";
    display();
    peek();

    cout << "\n";
    dequeue();
    dequeue();
    peek();

    cout << "\nQueue after deletion:\n";
    display();

    return 0;
}