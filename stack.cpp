/*#include <iostream>
using namespace std;

#define N 5
int stack[N];
int top=-1;
 void push(int x){
if(top==N-1){
    cout<<"overflow!!"<<endl;
    return;
}
else {
    top++;
    stack[top]=x;
    
}
 }

 void pop(){
    if(top==-1){
        cout<<"underflow!!"<<endl;
        return;
    }
    else{
        cout<<"poped element is : "<< stack[top]<<endl;
        top--;
    }
 }
 void peek(){
     if(top==-1){
        cout<<"stack is empty!!"<<endl;
        return;
    }
    else{
       cout<<"top element is : "<< stack[top]<<endl; 
 }}

 void display(){
     if(top==-1){
        cout<<"stack is empty!!"<<endl;
        return;
    }cout<<"stack is:";
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }cout<<endl;
 }

 int main(){
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    pop();
    pop();
    peek();
    display();
 }*/
//******************************************************************
/*#include<iostream>
#include<string>
using namespace std;
#define N 5
char stack1[N];
int top=-1;
void push(char c){
if(top==N-1){
    cout<<"overflow!!"<<endl;
    return;
}
else {
    top++;
    stack1[top]=c;
    
}
 }
char pop() {
    if (top == -1) {
        cout << "Underflow!!" << endl;
        return '\0';
    }
    else {
        char c = stack1[top];
        top--;
        return c;
    }
}
int main(){string s;
    cout<<"enter string:";
    cin>>s;
    for(int i=0;i<s.length();i++){
        push(s[i]);
    }cout << "Reversed string: ";
    while(top!=-1){
        cout<<pop();
    }
}*/
#include<iostream>
#include<string>
using namespace std;
#define N 10
char stack1[N];
int top=-1;
void push(char c){
if(top==N-1){
    cout<<"overflow!!"<<endl;
    return;
}
else {
    top++;
    stack1[top]=c;
    
}
 }
 void pop() {
    if (top == -1) {
        cout << "Underflow!!" << endl;
        return ;
    }
    else {
        char c = stack1[top];
        top--;
        
    }
}
int main(){
    string exp;
    bool balanced=true;
    cout<<"enter an expression:";
    cin>>exp;
    for(int i=0;i<exp.length();i++){
        if(exp[i]=='('){
                push(exp[i]);
        } 
        else if(exp[i]==')'){
            if(top==-1){
                balanced=false;
                break;
            }
            else
                pop();
        }
    }
    if (top != -1) {
    balanced = false;
}

if (balanced == true) {
    cout << "Balanced";
}
else {
    cout << "Not balanced";
}
}