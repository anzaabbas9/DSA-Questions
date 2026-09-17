//**********INSERTING A VALUE AT SPECIFIC POSITION********
/*#include<iostream>
using namespace std;
int main(){
int a[50]={2,4,6,8,9};
int value,pos,size;
cout<<"enter size of array:";
cin>>size;
cout<<"enter value you want to insert:";
cin>>value;
cout<<"enter position at which you want to insert:";
cin>>pos;
// for sorted array 
//for(int i=size-1;i>=pos-1;i--){
//a[i+1]=a[i];
//}
//a[pos-1]=value;
//size++;
// for unsorted array
a[size]=a[pos-1];
a[pos-1]=value;
size++;
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
}*/
//************DELETE A VALUE AT SPECIFIC POSITION*************
/*#include<iostream>
using namespace std;
int main(){
int a[50]={2,4,6,8,9};
int value,pos,size;
cout<<"enter size of array:";
cin>>size;
cout<<"enter value you want to delete:";
cin>>value;
cout<<"enter position at which you want to delete:";
cin>>pos;
if(pos<size-1&&pos>=0){
    //for sorted array
//for(int i=pos-1;i<size-1;i++){
//a[i]=a[i+1];}
//size--;
//for unsorted array
a[pos-1]=a[size-1];
size--;
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}}
else
cout<<"invalid position!!";
}*/
//********************AARAY AND POINTER*********************
#include<iostream>
using namespace std;
int main(){
int a[5]={2,4,6,8,9};
int *p=a;
//p++;
//cout<<*a+1<<endl;
cout<<*(a+1)<<endl;
for(int i=0;i<5;i++){
    //cout<<(a+i)<<"   ";
   // cout<<*(p+i)<<" ";
   //cout<<i[a]<<" ";
   //cout<<endl<<i[p]<<" ";
   //cout<<a[i]<<" ";
   cout<<p[i]<<" ";
}}