#include<iostream>
using namespace std;

//Write a recursive function to rotate elements in an array to the right by 1 position.

void rotatearray(int start,int arr[],int n)
{
    if(start==n-1){
        return;
    }
    
    swap(arr[start],arr[start+1]);
    rotatearray(start+1,arr,n);
    
}



int main()
{
   int arr[6]={2,5,1,7,4,9};
   int n=sizeof(arr)/sizeof(arr[0]);
   int first=arr[0];
   rotatearray(0,arr,n);
   arr[n-1]=first;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}