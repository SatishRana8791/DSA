#include<iostream>
using namespace std;
int main()
{
    //Take 20 elements from user input and find its sum with the help of an array.
    cout<<"input the array elements :";
    int arr[100];
    for(int i=0;i<20;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<20;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   
   //sum calculate

    int  sum=0;
   for(int i=0;i<20;i++)
   {
      sum=sum+arr[i];
   }
   cout<<sum;
    

    
}
