#include<iostream>
using namespace std;
int main()
{
    //rotate array by 1
    int arr[8]={2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    int temp=9;
    arr[0]=temp;
    cout<<arr;

    
}