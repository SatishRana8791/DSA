#include<iostream>
using namespace std;
int main()
{
    //find the sum of first n numbers including 0
    int i,num,n;
    num=0;
    cout<<"enter the number :";
    cin>>n;
   for(i=0;i<=n;i++)
   {
    num=num+i;
   }
   cout<<num<<endl;
}
