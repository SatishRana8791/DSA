#include<iostream>
using namespace std;
int sum(int a,int b)  //function declare
{
   int sum=a+b;  //function define
    return sum;
    
}
int mul(int a,int b)
{
    int mul=a*b;
    return mul;
}
void fun()
{
    cout<<"hello coder army :";
}

int main()
{
    int m,n;
    cout<<"enter the input :";
    cin>>m>>n;
    //funtion call
    cout<<sum(m,n)<<endl;
    cout<<mul(m,n)<<endl;
    fun();

}