#include<iostream>
using namespace std;
int main()
{
    //selection sort
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        int j;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
    