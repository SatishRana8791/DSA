#include<iostream>
#include<deque>
using namespace std;

//implement deque using linked list
class Node{
     public:
     int data;
     Node* prev,*next;

     Node(int value){
        data=value;
        next=prev=NULL;
     }
};
class Deque{
    Node* front,*rear;

    public:
    Deque(){
        front=rear=NULL;
    }

    //push_front
    void push_front(int x){
        if(front==NULL){
            front=rear=new Node(x);
            cout<<"pushed "<<x<<" in a empty linked list\n";
            
            
        }
        else{
            Node* temp=new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"pushed "<<x<<" in a linked list at front\n";
            
        }
    }
    //push_back
    void push_back(int x){
        if(front==NULL){
            front=rear=new Node(x);
            cout<<"pushed "<<x<<" in a empty linked list\n";
            return;
        }
        else{
             rear->next=new Node(x);
             rear=rear->next;
             cout<<"pushed "<<x<<" in a linked list at back\n";
             
        }
    }
    //pop_front
    void pop_front(){
        if(front==NULL){
            cout<<"deque underflow\n";
            return;
        }
        else{
            Node*temp=front;
            cout<<"popped "<<temp->data<<" into a linked list at front\n";
            front=front->next;
            delete temp;
            if(front){
                front->prev=NULL;
            }
            else{
                rear=nullptr;
            }
            
            
        }
    }
    //pop_back
    void pop_back(){
        if(front==NULL){
            cout<<"deque underflow\n";
            return;
        }
        else{
            Node*temp=rear;
            cout<<"popped "<<temp->data<<" into a linked list at back\n";
            rear=rear->prev;
            delete temp;
            if(rear){
                rear->next=nullptr;
            }
            else{
                 front=NULL;
            }
            
            
        }
    }
    //start
    int start(){
        if(front==NULL){
            return -1;
        }
        else{
            return front->data;
        }
    }
    //end
    int end(){
        if(front==NULL){
            return -1;
        }
        else{
            return rear->data;
        }
    }

};



int main()
{  
    Deque q;
    q.push_front(2);
    q.push_front(3);
    q.push_back(4);
    q.push_front(5);
    q.push_back(6);
    q.pop_front();
    cout<<q.start();
    cout<<endl;
    cout<<q.end();
}