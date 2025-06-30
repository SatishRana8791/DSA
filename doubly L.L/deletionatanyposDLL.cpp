#include<iostream>
using namespace std;
//deletion at start or end
//deletion at any given position
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

Node* createDLL(int arr[],int index,int size,Node *back){
     if(index==size){
        return nullptr;
     }
     Node *temp=new Node(arr[index]);
     temp->prev=back;

     temp->next=createDLL(arr,index+1,size,temp);
     return temp;
}

int main()
{
    Node* head=NULL;
    int arr[]={1,2,3,4,5};

    head=createDLL(arr,0,5,NULL);
    int pos=4;

    //delete at start
    //if(head!=NULL){
    //    
    //    // only one node exist
    //    if(head->next==NULL){
    //        delete head;
    //        head=NULL;
    //    }
    //    // more than 1 node exist
    //    else{
    //        Node* temp=head;
    //        head=head->next;
    //        delete temp;
    //        head->prev=NULL;
    //    }
    //}

    //delete at end
    //if(head!=NULL)
    //{
    //    if(head->next==NULL){
    //        delete head;
    //        head=NULL;
    //    }
    //    else
    //    {
    //        Node* curr=head;
    //        while(curr->next!=NULL)
    //        {
    //        curr=curr->next;
    //        }
    //        curr->prev->next=NULL;
    //        delete curr;
    //    }
    //    
    //}

    //deletion at any given position
    if(pos==1)
    {
        //deletion at start

        //if only one node exist
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        //if more than one node exist
        else{
              Node* temp=head;
              head=head->next;
              delete temp;
              head->prev=NULL;
        }
    }
        
    else
    {
        Node* curr=head;
        while(--pos){
            curr=curr->next;
        }

        //deletion at end
        if(curr->next==NULL){
            curr->prev->next=NULL;
            delete curr;
        }

        //deletion at any middle position 
        else{
            curr->prev->next=curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }
        

    }
    
    
    




    //print the value
    Node* travers=head;
    while(travers){
        cout<<travers->data<<" ";
        travers=travers->next;
    }
}
