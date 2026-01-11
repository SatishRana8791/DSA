#include<iostream>
#include<queue>
using namespace std;
//create a node class to give value
class Node{
    public:
    int data;
    Node* left,*right;

    Node(int value){
        data=value;
        left=right=NULL;
    }
};
//implement main function
int main()
{
    
    //input the root node value                                                     //how the tree will lokk like
    int x;                                                                          //                                1
     cout<<"enter the root node :";                                                 //                          2            3
    cin>>x;                                                                         //                       4      5    6        7
    queue<Node*>q;                                                                  //                     8    9 -1  -1-1  -1   -1  -1
    int first,second;                                                               //
    Node* root=new Node(x);                                                         //
    q.push(root);
   
    //create the binary tree
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        cout<<"enter the left child of "<<temp->data<<" ";
        cin>>first;      //take left child 

        if(first!=-1){
            temp->left=new Node(first);
            q.push(temp->left);
        }

        cout<<"enter the right child of "<<temp->data<<" ";
        cin>>second;     //take right child
        if(second!=-1){
            temp->right=new Node(second);
            q.push(temp->right);
        }
    }
}