#include<iostream>
using namespace std;
int main()
{
    //find the odd numbers between 1 to n 
    int num;
    cout<<"enter the number :";
    cin>> num;
   for(int i=1;i<=num;i=i+1)
   {
    if(i%2!=0){
        cout<<i<<endl;
    }
   }


}