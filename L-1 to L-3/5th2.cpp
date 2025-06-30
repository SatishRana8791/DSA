#include<iostream>
using namespace std;
int main()
{
  //find the power of a number 
    int n,pow,num;
    cout<<"enter the number :";
    cin>>n;
    cout<<"enter the power :";
    cin>>pow;
      num=n;
   for(int i=1;i<pow;i=i+1)
   {
     num=num*n;

   }
   cout<<num<<endl;
   
}