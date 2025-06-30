#include<iostream>
using namespace std;
int main()
{
    //find the greatest berween two numbers 
    int a,b;
    cout<<"enter the numbers :";
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater than b";
        return 0;
    }
    else
    {
        cout<<"b is greater than a";
        return 0;
    }
}