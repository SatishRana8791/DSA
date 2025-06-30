#include<iostream>
using namespace std;
// doubly linked list creation using recursion
//and insertion at any position
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
//create the function for recursion
Node* createDLL(int arr[],int index,int size,Node *back){
     if(index==size){
        return nullptr;
     }
     Node *temp=new Node(arr[index]);
     temp->prev=back;

     temp->next=createDLL(arr,index+1,size,temp);
     return temp;
}


int main(){
    Node *head=NULL;

    int arr[]={1,2,3,4,5};
    
    //create a DLL using this array

    head=createDLL(arr,0,5,NULL);
    
    //print the DLL
    //while(head){
    //    cout<<head->data<<" ";
    //    head=head->next;
    //}

    //insert the node at any position 
    int pos=0;
    
    

    //insert at start

    if(pos==0){

        //DLL doesn't exist karti hai 
        if(head==NULL){
            Node *temp=new Node(5);
            head=temp;
        }
        

        //DLL exist karti hai
        else{
            Node* temp=new Node(5);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        
    }

    //insert at end

    else{
        //go to the node where we have to insert
        Node *curr=head;
        while(--pos){
            curr=curr->next;
        }
        
        //insert at last
        if(curr->next==NULL){
            Node *temp=new Node(5);
            temp->prev=curr;
            curr->next=temp;
        }
        //insert at middle
        else{
            Node *temp=new Node(5);
            temp->next=curr->next;
            temp->prev=curr;
            curr->next=temp;
            temp->next->prev=temp;
        }
    }
    Node* travers=head;
    while(travers){
        cout<<travers->data<<" ";
        travers=travers->next;
    }


}