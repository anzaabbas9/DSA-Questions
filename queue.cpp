//**************************IMPLEMENT QUEUE USING STACK*********************
#include <iostream>
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
}
