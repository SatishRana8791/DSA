#include<iostream>
using namespace std;
int main()
{
    //binary search
    int arr[1000];
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1;
    
    int key;
    cin>>key;
    while(start<=end)
    {

     int mid=(start+end)/2;

     if(arr[mid]==key)
     {
        cout<<"got it";
        break;
     }

     else if(arr[mid]<key)
     {
        start=mid+1;
     }

     else
     {
        end=mid-1;
     }

    }
}