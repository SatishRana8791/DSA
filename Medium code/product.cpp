#include<iostream>
using namespace std;

int multiply(int arr[],int index,int n,int mul)
{
    if(index==n){
        return mul;
    }
    
    mul*=arr[index];
    return multiply(arr,index+1,n,mul);
}



int main()
{
    //Find the Product of all elements in a given array of size N.
    //int arr[]={2,4,6,1,7,8};
    
    cout<<"enter the array size :";
    int n;
    cin>>n;
    cout<<endl;
    cout<<"enter the array element :";
    cout<<endl;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cout<<" ";
    }
    cout<<multiply(arr,0,n,1);
}