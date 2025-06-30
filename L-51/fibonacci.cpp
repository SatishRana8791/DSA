#include<iostream>
using namespace std;
int fib(int num)
{
    if(num<=1){
        return num;
    }
    return fib(num-1)+fib(num-2);
}
int main()
{
    int n;
    cout<<"enter the index number which u want :";
    cin>>n;
    cout<<fib(n);
}