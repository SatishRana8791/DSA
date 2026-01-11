#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int *arr;
    int size;          //total elements in heap
    int total_size;   //array size

    MaxHeap(int n){
        arr=new int[n];
        size=0;
        total_size=n;
    }

    //insert into the heap
    void insert(int value){
        //if heap size is available or not
        if(size==total_size){
            cout<<"size overflow\n";
            return;
        }

        arr[size]=value;
        int index=size;
        size++;

        //compare it with its parent

        while(index>0 && arr[(index-1)/2]< arr[index]){
            swap(arr[(index-1)/2],arr[index]);
            index=(index-1)/2;
        }

        cout<<arr[index]<<" is inserted into the heap\n";
    }
    void print(){
            for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }

            cout<<endl;
        };
    void Heapify(int index){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;

        //largest will store the index of the element which is greater btw parent, left and right
        if(largest!=index){
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }  
    void Delete(){
        if(size==0){
            cout<<"heap underflow\n";
            return;
        }
        cout<<arr[0]<<" is deleted from the heap\n";

        arr[0]=arr[size-1];
        size--;
        if(size==0){
            return;
        }

        Heapify(0);
    }
};
int main(){
    MaxHeap H1(7);      //create heap object
    H1.insert(7);
    H1.insert(17);
    H1.insert(11);
    H1.insert(10);
    H1.Delete();
    H1.print();
    H1.insert(50);
    H1.insert(30);
    H1.insert(20);
    H1.print();
}