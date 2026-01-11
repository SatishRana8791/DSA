#include<iostream>
using namespace std;
int main()
{
    // Find the second largest element in an array of unique elements of size n. Where n>3.
    int n;
    cout<<"enter the elements :";
    cin>>n;
    int arr[sizeof(n)];
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
       if(ans<arr[i])
       {
        ans=arr[i];
       }
    }
    cout<<ans;


}