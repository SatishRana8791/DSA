#include<iostream>
using namespace std;
//insert node at star of array
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }

};

Node* Createlinkedlist(int arr[],int index,int size,Node *prev){
    //base condition
    if(index==size){
        return prev;
    }

    Node *temp;
    temp=new Node(arr[index]);
    temp->next=prev;

    return Createlinkedlist(arr,index+1,size,temp);
};


int main(){

    int arr[]={2,4,6,8};

    Node *head;
    head=NULL;

    head= Createlinkedlist(arr,0,4,head);
    
    //print the value

    Node *temp;
    temp=head;

    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}