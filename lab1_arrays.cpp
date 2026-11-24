//**********************INPUT AN ARRAY********************************
/*#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<<"enter elements of array: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
     cout<<"elements of array are : ";
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<"position 3 element is:"<<a[2];
    return 0;
}*/
//********************REVERSE AN ARRAY************************
/*#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<<"enter elements of array: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
     cout<<"elements of array are : ";
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
    return 0;
}*/
//*************************ZERO COUNT***********************
/*#include<iostream>
using namespace std;
int main(){
    int a[10],count=0;
    cout<<"enter elements of array: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
    if(a[i]==0)
    count++;
    }cout<<"zero's are:"<<count;
    return 0;
}*/
//**************************SEARCH AN ELEMENT*********************************
/*#include<iostream>
using namespace std;
int main(){
    int a[10],num;
    cout<<"enter a value to search:";
    cin>>num;
    cout<<"enter elements of array: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
    if(a[i]==num){
        cout<<"found at index "<<i<<" ";
    }

    }
    return 0;
}*/
//***************************REPEATING ELEMENT*****************************
/*#include <iostream>
using namespace std;
int main()
{
    int a[5], count = 0;
    cout << "enter elements of array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] == a[j])
            {
                cout <<"duplicate numbers are:" <<a[i]<<endl;
                break;
            }
        }}
    return 0;
}*/
//*********************SUM OF ELEMENTS**********************
/*#include<iostream>
using namespace std;
int main(){
    int a[10],SUM=0;
    cout<<"enter elements of array: ";
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
   SUM+=a[i];
    }cout<<"sum of elements are:"<<SUM;
    return 0;
}*/
//***********************MAXIMUM ELEMENT********************
/*#include<iostream>
using namespace std;
int main(){
    int a[5],max;
    cout<<"enter elements of array: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }max=a[0];
    for(int i=0;i<5;i++){
    if(a[i]>a[0])
    max=a[i];
    }cout<<"maximum element is:"<<max;
    return 0;
}*/
//***********************MINIMUM ELEMENT********************
/*#include<iostream>
using namespace std;
int main(){
    int a[5],min;
    cout<<"enter elements of array: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }min=a[0];
    for(int i=0;i<5;i++){
    if(a[0]>a[i])
    min=a[i];
    }cout<<"minimum element is:"<<min;
    return 0;
}*/
//*********************ALTERNATIVE ELEMENT***************************
/*#include<iostream>
using namespace std;
int main(){
    int a[5];
    cout<<"enter elements of array: ";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i+=2){
    cout<<a[i]<<" ";}
    return 0;
}*/

