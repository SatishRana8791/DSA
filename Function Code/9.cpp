#include<iostream>
using namespace std;
//Swap 2 numbers a, b without using extra variables. Range of 
//-10000<=a,b<=100000. 

void swap(int &a,int &b)
{
    if(-10000<=a,b<=10000)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    else{
        cout<<"out of range";
    }
  
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<endl<<b;
    return 0;
}
