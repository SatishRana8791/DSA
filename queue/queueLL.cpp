#include<iostream>
using namespace std;

//make a node class
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};
//make a queue class
class Queue{
    Node* front;
    Node* rear;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
    }

    //make push function
    void push(int x){
        if(IsEmpty()){
            rear=front=new Node(x);
            cout<<"pushed "<<front->data<<" into the queue\n";
            return;
        }
        else{
            rear->next=new Node(x);
            //if the heap memory become full
            if(rear->next==nullptr){
                cout<<"queue overflow\n";
                return;
            }
            rear=rear->next;
            cout<<"pushed "<<rear->data<<" into the queue\n";
        }
    }
    //pop function
    void pop(){
        if(IsEmpty()){
            cout<<"queue underflow\n";
            return;
        }
        else{
            cout<<"popped "<<front->data<<" into the queue\n";
            Node* temp=front;
            front=front->next;
            delete temp;
        }
    }
    //IsEmpty finder
    bool IsEmpty(){
        return front==NULL;
    }

    //IsFull finder
    //start node
    int start(){
        if(IsEmpty()){
            cout<<"queue is empty\n";
            return -1;
        }
        else{
            return front->data;
        }
    }
};

//main class 
int main(){
    Queue q;
    q.push(60);
    q.push(61);
    q.pop();
    
    q.pop();
    cout<<q.start();
}