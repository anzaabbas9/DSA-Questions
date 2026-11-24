#include<iostream>
using namespace std;
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(((rear+1)%N)==front){
        cout<<"overflow!!"<<endl;
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear=(rear+1)%N;
        queue[rear]=x;
        
    }
}
void dequeue(){
    
 if(front==-1&&rear==-1){
        cout<<"underflow!!"<<endl;
    }
    else if(rear==front){
        cout<<"dequeued value is:"<<queue[front]<<endl;
        front=rear=-1;
    }
    else{
        cout<<"dequeued value is:"<<queue[front]<<endl;
        front=(front+1)%N;
    }
}
void display(){
    int count =0;
  if(front==-1&&rear==-1){
        cout<<"queue is empty!"<<endl;
    } 
    else{
        cout<<"Queue is:";
        for(int i=front;i!=rear;i=((i+1)%N)){
            cout<<queue[i]<<" ";
            count++;
        }cout<<queue[rear]<<endl;
        count++;
        cout<<"total values are :"<<count<<endl;
    } 
}
void reverse(){
    int temp[N];
    int j = 0;
int i = front;
  if(front==-1&&rear==-1){
        cout<<"queue is empty!"<<endl;
    } 
    else{
        for(int i=front;i!=rear;i=((i+1)%N)){
            temp[j]=queue[i];
            j++;
        }cout<<queue[rear]<<endl;
         temp[j]=queue[rear];
            j++;
    } 
    for(int k=j-1;k>=0;k--){
        cout<<temp[k]<<" ";
    }
}
void peek(){
    if(front==-1&&rear==-1){
        cout<<"queue is empty!"<<endl;
    } 
    else{
        cout<<"queue front value is:"<<queue[front]<<endl;
                cout<<"queue rear value is:"<<queue[rear]<<endl;

    } 
}
int main(){
enqueue(5);
enqueue(6);
enqueue(7);
peek();
dequeue();
display();
enqueue(8);
enqueue(9);
enqueue(10);
display();
peek();
reverse();
}