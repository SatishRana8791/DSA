#include<iostream>
using namespace std;

//make a queue class
class queue{
    int *arr;
    int front,rear;
    int size;

    public:
    queue(int n){
        arr=new int[n];
        front=rear=-1;
        size=n;
    }

    //isempty
    bool IsEmpty(){
        return front==-1;
    }

    //isfull
    bool IsFull(){
        return rear==size-1;
    }

    //make the push function
    void push(int x){
        //check full or not
        if(IsFull()){
            cout<<"queue overflow\n";
            return;
        }
        //check empty or not
        else if(IsEmpty()){
            cout<<"pushed "<<x<<" into the queue\n";
            front=rear=0;
            arr[0]=x;
            return;
        }
        else{
            rear=rear+1;
            arr[rear]=x;
            cout<<"pushed "<<x<<" into the queue\n";
        }
    }

    //pop function
    void pop(){
        //check empty
        if(IsEmpty()){
            cout<<"queue underflow\n";
            return;
        }
        //pop kar do
        else{
            if(front==rear){
                cout<<"popped "<<arr[front]<<" from the queue\n";
                front=rear=-1;
            }
            else{
                cout<<"popped "<<arr[front]<<" from the queue\n";
                front=front+1;
            }
        }
    }

    //start element
    int start(){
        if(IsEmpty()){
            cout<<"queue is empty\n";
            return -1;
        }
        else{
            return arr[front];
            cout<<endl;
        }
    }
};
int main(){
    queue q(5);
    q.push(60);
    q.push(61);
    q.push(63);
    q.push(65);
    q.push(67);
    q.push(69);
    q.pop();
    q.pop();
    cout<<q.start()<<endl;
    cout<<q.IsEmpty();
}
