#include<iostream>
using namespace std;

//create node class
class Node
{
    public:
    int data;
    Node* left,*right;

    Node(int value){
        data=value;
        left=right=nullptr;
    }
};
//create binary tree function
Node* BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp=new Node(x);      //create new node
    cout<<"enter the left child of "<<x<<" :";
    temp->left=BinaryTree();    //create left child
    cout<<"enter the right child of "<<x<<" :";
    temp->right=BinaryTree();   //create right child
    return temp;
}
//pre-order function call
void preorder(Node* root){
    
    if(root==NULL){
        return;
    }
    cout<<root->data;               //print node value
    preorder(root->left);           //left side go 
    preorder(root->right);          //right side go
};
//in-order function call
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);            //go to left side first
    cout<<root->data;                //print the node value
    inorder(root->right);           //go to right side 
};
//post-order function call
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);               //go to left side
    postorder(root->right);             //go to right side
    cout<<root->data;                    //print the node value
};

int main()
{
    //tree creation code
    cout<<"enter the root node :";
    Node* root;
    root=BinaryTree();


    //tree traversal code
    cout<<"preorder :";
    preorder(root);

    cout<<"\ninorder :";
    inorder(root);

    cout<<"\npostorder :";
    postorder(root);
}