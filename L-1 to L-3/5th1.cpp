#include<iostream>
using namespace std;
int main()
{
//print the numbers which is multiple of n 
int n,i;
cout<<"enter the number :";
cin>> n;
for( i=n;i<=10*n;i=i+n)
{
    cout<<i <<" ";
}

}