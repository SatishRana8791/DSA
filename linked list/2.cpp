#include<iostream>
using namespace std;
//create a linked list using recursion
class Node
{
   public:
   int data;
   Node *next;
   
   Node(int value){
      data=value;
      next=NULL;
   }
};

Node* Createlinkedlist(int arr[],int index,int size)
{
   if(index==size){
      return NULL;
   }

   Node *temp;
   temp=new Node(arr[index]);
   temp->next=Createlinkedlist(arr,index+1,size);

   return temp;
};

int main()
{
    
    Node *head;
    head=NULL;

    int arr[]={2,4,6,8,10};
    
    head=Createlinkedlist(arr,0,5);
    
    //print the value
    Node *temp;
    temp=head;
    while(temp){
      cout<<temp->data<<" ";
      temp=temp->next;

    }
}