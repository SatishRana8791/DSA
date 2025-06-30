#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int value){
        data=value;
        next=nullptr;
        prev=nullptr;
    }
};

int main()
{
    Node *head=NULL;
    //insertion at start
    //if node doesn't exist
    if(head==NULL){
        head=new Node(5);
    }
    //if node exist
    else{
        Node* temp=new Node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    //print the value
    Node *traverse=head;
    while(traverse){
        cout<<traverse->data<<" ";
        traverse=traverse->next;
    }

}