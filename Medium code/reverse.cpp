#include<iostream>
using namespace std;
//Write a recursive function to reverse the elements of an array

void revers(int start,int arr[],int end){
    if(start>=end){
        return;
    }
    swap(arr[start],arr[end]);

     revers(start+1,arr,end-1);
    
     
}

int main(){
    int arr[6]={2,4,7,3,1,9};
    int n=6;
    int start=0;
    revers(0,arr,n-1);
    cout<<"array obtained after reverse :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}