//**************LINEAR QUEUE**************
/*#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
	if (rear == N - 1)
	{
		cout << "overflow!!"<<endl;
	}
	else if (front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = x;
	}
	else
	{
		rear++;
		queue[rear] = x;
	}
}
void dequeue()
{
	if (front == -1 && rear == -1)
	{
		cout << "underflow!!"<<endl;
	}
	else if(front==rear){
		cout << "dequeued value is:" << queue[front]<<endl;
		front=rear=-1;
	}
	else
	{
		cout << "dequeued value is:" << queue[front]<<endl;
		front++;
	}
}
void display()
{
	if (front == -1 && rear == -1)
	{
		cout << "queue is empty!!"<<endl;
	}
	else
	{
		for (int i = front; i <= rear; i++)
		{
			cout << queue[i] << " ";
		}
		cout << endl;
	}
}
void peak()
{
	if (front == -1 && rear == -1)
	{
		cout << "queue is empty!!"<<endl;
	}
	else
	{
		cout << "queue front is:" << queue[front] << endl;
	}
}
int main()
{
	enqueue(2);
	enqueue(5);
	display();
	peak();
	dequeue();
	peak();
	display();
	return 0;
}*/
//*****************CIRCULAR QUEUE*******************
/*#include <iostream>
using namespace std;
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
	if ((rear+1)%N == front)
	{
		cout << "overflow!!"<<endl;
	}
	else if (front == -1 && rear == -1)
	{
		front = rear = 0;
		queue[rear] = x;
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear] = x;
	}
}
void dequeue()
{
	if (front == -1 && rear == -1)
	{
		cout << "underflow!!"<<endl;
	}
	else if(front==rear){
		cout << "dequeued value is:" << queue[front]<<endl;
		front=rear=-1;
	}
	else
	{
		cout << "dequeued value is:" << queue[front]<<endl;
		front=(front+1)%N;
	}
}
void display()
{
	if (front == -1 && rear == -1)
	{
		cout << "queue is empty!!"<<endl;
	}
	else
	cout<<"QUEUE IS:";
	{
		for (int i = front; i !=rear; i=(i+1)%N)
		{
			cout << queue[i] << " ";
		}cout<<queue[rear]<<endl;
	}
}
void peak()
{
	if (front == -1 && rear == -1)
	{
		cout << "queue is empty!!"<<endl;
	}
	else
	{
		cout << "queue front is:" << queue[front] << endl;
	}
}
int main()
{
	enqueue(2);
	enqueue(5);
	display();
	peak();
	dequeue();
	peak();
	display();

	enqueue(-1);
	display();
	enqueue(10);
	display();
	enqueue(0);
	display();
	enqueue(6);
	display();

	dequeue();
	enqueue(8);
	display();

	return 0;
}*/
//************************PRIORITY QUEUE***************************
/*#include <iostream>
using namespace std;

int queue[100];
int priority[100];
int count = 0;
void enqueue(int x, int p)
{
	queue[count] = x;
	priority[count] = p;
	count++;
}
void dequeue()
{
	if (count == 0)
	{
		cout << "queue is empty!!";
		return;
	}
	int highest = 0;
	for (int i = 1; i < count; i++)
	{
		if (priority[i] > priority[highest])
		{
			highest = i;
		}
	}
	cout << "removed:" << queue[highest]<<endl;
	for (int i = highest; i < count - 1; i++)
	{
		queue[i] = queue[i + 1];
		priority[i] = priority[i + 1];
	}
	count--;
}
void display()
{
	for (int i = 0; i < count; i++)
	{
		cout << queue[i] << "(" << priority[i] << ")"<<" ";
	}
	cout << endl;
}
int main()
{
	enqueue(10, 2);
	enqueue(20, 5);
	enqueue(30, 1);
	enqueue(40, 4);

	display();

	dequeue();
	dequeue();

	return 0;
}*/
