#include<iostream>
using namespace std;
int main()
{
    
    int arr[7]={1,2,3,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
//sum of all element in an array
int sum=0;
for(int i=0;i<n-1;i++)
{
    sum+=arr[i];
}
cout<<sum<<endl;
//sum of a number
int ans=n*(n+1)/2;
cout<<ans-sum;

}