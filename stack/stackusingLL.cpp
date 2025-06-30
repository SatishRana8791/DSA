#include<iostream>
using namespace std;

//implementation of stack using LL
class Node {
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

//make a stack class
class Stack{
    Node* top;
    int size;

    public:
    Stack(){
        top=NULL;
        size=0;
    }
    

    //push
    int push(int value){
        Node* temp=new Node(value);
        if(temp==NULL){
            cout<<"stack overflow\n";
            return -1;
            
        }
        else{
            temp->next=top;
            top=temp;
            cout<<"pushed "<<value<<" into the stack\n";
            size++;
        }
        
    }

    //pop
    void pop(){
        //base case
        if(top==NULL){
            cout<<"stack underflow\n";
            
        }
        else{
            Node* temp=top;
            cout<<"popped "<<top->data<<" from the stack\n";
            top=top->next;
            delete temp;
            size--;
        }
    }

    //peek
    int peek(){
        if(top==NULL){
            cout<<"stack is empty\n";
            return -1;
        }
        else {
            return top->data;
        }
    }

    //IsEmpty
    bool IsEmpty(){
        return top==NULL;
    }

    //IsSize
    int IsSize(){
        return size;
    }
};

int main(){
    Stack S;
    S.push(80);
    S.push(81);
    S.push(82);
    cout<<S.IsSize()<<endl;
    // cout<<S.peek()<<endl;
    S.pop();
    S.pop();
    
    cout<<S.peek()<<endl;
    cout<<S.IsEmpty();

}