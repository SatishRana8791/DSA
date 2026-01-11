#include<iostream>
using namespace std;
//pass by value
void incr(int n)
{
    n++;
}
int main()
{
    int a=10;
    incr(a);
    cout<<a;
}