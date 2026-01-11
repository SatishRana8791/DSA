#include<iostream>
using namespace std;

void Heapify(int arr[],int index,int n){

    int largest=index;
    int left=2*index+1;
    int right=2*index+2;

    if(left < n && arr[left]> arr[largest]){   //for min heap just change the sign in both i.e <
        largest=left;
    }

    if(right < n && arr[right]>arr[largest]){   //same in this <
        largest=right;
    }

    if(largest!=index){
        swap(arr[largest],arr[index]);
        Heapify(arr,largest,n);
    }
}

void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void BuildMaxHeap(int arr[],int n){
    //step down 
    for(int i=n/2-1;i>=0;i--){
        Heapify(arr,i,n);
    }
}
void sortarray(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        Heapify(arr,0,i);
    }
}

int main(){
    int arr[]={10,3,8,9,13,18,14,11,70,54};
    BuildMaxHeap(arr,10);
    sortarray(arr,10);    //it will in sorted order  by heap sort
    printHeap(arr,10);
}