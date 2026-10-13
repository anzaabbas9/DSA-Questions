//**************************IMPLEMENT QUEUE USING STACK*********************
/*#include <iostream>
using namespace std;
#define N 5
int stack1[N], stack2[N];
int top1 = -1, count = 0;
int top2 = -1;
void push1(int a)
{
    if (top1 == N - 1)
    {
        cout << "overflow!!";
    }
    else
    {
        top1++;
        stack1[top1] = a;
    }
}
void push2(int a)
{
    if (top2 == N - 1)
    {
        cout << "overflow!!";
    }
    else
    {
        top2++;
        stack2[top2] = a;
    }
}
int pop1()
{
    if (top1 == -1)
    {
        cout << "underflow!!";
    }
    return stack1[top1--];
}
int pop2()
{
    if (top2 == -1)
    {
        cout << "underflow!!";
    }
    return stack2[top2--];
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    int a, b = 0;
    if (top2 == -1 && top1 == -1)
    {
        cout << "Queue is empty\n";
    }
    else
        for (int i = 0; i < count; i++)
        {
            a = pop1();
            push2(a);
        }
    b = pop2();
    cout << "removed value:" << b << endl;
    count--;
    for (int i = 0; i < count; i++)
    {
        a = pop2();
        push1(a);
    }
}
void display()
{
    cout << "queue is:";
    for (int i = 0; i <= top1; i++)
    {
        cout << stack1[i] << " ";
    }
    cout << endl;
}
int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(-1);
    enqueue(4);
    enqueue(7);
    dequeue();
    display();
}*/
//*****************************DEQUE IMPLEMENTATION USING CIRCULAR ARRAY***************************
#include <iostream>
using namespace std;
#define N 5
int deque[N];
int f=-1;
int  r = -1;
void enqueuefront(int x)
{
    if (f == r + 1 || (f == 0 && r == N - 1))
    {
        cout << "overflow!!" << endl;
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[f]=x;
    }
    else if (f == 0)
    {
        f = N-1;
        deque[f]=x;
    }
    else{
        f--;
    deque[f]=x;}
}
void enqueuerear(int x)
{
    if (f == r + 1 || (f == 0 && r == N - 1))
    {
        cout << "overflow!!" << endl;
    }
    else if (f == -1 && r == -1)
    {
        f = r = 0;
        deque[r]=x;
    }
    else if (r == N - 1)
    {
        r = 0;
        deque[r]=x;
    }
    else{
        r++;
    deque[r]=x;}
}
void dequeuefront()
{
    if (f == -1 && r == -1)
    {
        cout << "underflow!!" << endl;
    }
    else if (f == r)
    {
        cout << "dequeued value is:" << deque[f] << endl;
        f=r=-1;
    }
    else if (f == N - 1)
    {
        cout << "dequeued value is:" << deque[f] << endl;
        f = 0;
    }
    else
    {
        cout << "dequeued value is:" << deque[f] << endl;
        f++;
    }
}
void dequeuerear()
{
    if (f == -1 && r == -1)
    {
        cout << "underflow!!" << endl;
    }
    else if (f == r)
    {
        cout << "dequeued value is:" << deque[r] << endl;
        f=r=-1;
    }
    else if (r == 0)
    {
        cout << "dequeued value is:" << deque[r] << endl;
        r = N-1;
    }
    else
    {
        cout << "dequeued value is:" << deque[r] << endl;
        r--;
    }
}
void display(){
     if (f == -1 && r == -1)
    {
        cout << "underflow!!" << endl;
    }else{
    cout<<"deque is:";
    int i=f;
    while(i!=r){
        cout<<deque[i]<<" ";
        i=(i+1)%N;
    }cout<<deque[r]<<endl;}
}
void getfront(){
    if (f == -1 && r == -1)
    {
        cout << "underflow!!" << endl;
    }
    else
    cout<<"front value is:"<<deque[f]<<endl;
}
void getrear(){
    if (f == -1 && r == -1)
    {
        cout << "underflow!!" << endl;
    }
    else
    cout<<"rear value is:"<<deque[r]<<endl;
}
int main(){
    enqueuefront(2);
    enqueuefront(5);
    enqueuerear(-1);
    enqueuerear(0);
    enqueuefront(7);
    display();

    dequeuefront();
    dequeuerear();
    dequeuefront();
}
