#include<iostream>
using namespace std;
void incr(int &n)  //pass by reference
{
    n++;
}
int main()
{
    int a=10;
    incr(a);
    cout<<a;
}
