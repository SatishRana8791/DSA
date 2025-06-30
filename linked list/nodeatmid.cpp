#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};

Node* Createlinkedlist(int arr[],int index,int size){
    //base condition
    if(index==size){
        return NULL;
    }

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=Createlinkedlist(arr,index+1,size);

    return temp;
};

//print function create 
void printlist(Node *head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
};

int main()
{
    Node *head;
    head=NULL;

    int arr[]={2,4,6,8};

    head=Createlinkedlist(arr,0,4);
    //insert node at particular position
    int x=3;//insert at position 3
    int value=30;

    Node *temp=head;
    x--;

    while(x--){
        temp=temp->next;
    }

    Node *temp2=new Node(value);
    temp2->next=temp->next;
    temp->next=temp2;
    
    //call the print function
    printlist(head);
}