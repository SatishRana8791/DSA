#include<iostream>
using namespace std;

int maximum(int arr[],int index,int n,int maxi)
{
    if(index==n){
        return maxi ;
    }
    maxi= max(maxi,arr[index]);
    return maximum(arr,index+1,n,maxi);
}
int main()
{
    //Find the Maximum element in a given array of size N.
    int arr[]={2,7,4,9,37,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT32_MIN;
    cout<<maximum(arr,0,n,maxi);
}