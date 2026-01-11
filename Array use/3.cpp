#include<iostream>
using namespace std;
int main()
{
    // Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
    int n;
    cout<<"enter the size of the array :";
    cin>>n;
    int arr[sizeof(n)];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=4;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            cout<<i;
        }
        else
        {
            cout<<"-1";
        }
        cout<<endl;
    }
}