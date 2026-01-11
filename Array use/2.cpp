#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the input :";
    //Calculate the average of elements in an array of size 18.
    int arr[20];
    for(int i=0;i<18;i++)
    {
        cin>>arr[i];
    }

    //averrage calculation
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<18;i++)
    {
      sum=sum+arr[i];
    }
    cout<<sum<<endl;
    cout<<sum/n;
}