#include<iostream>
using namespace std;
//AVL tree creation 
class Node{
    public:
    int data,height;
    Node* left,*right;
    Node(int value){
        data=value;
        height=1;
        left=right=NULL;
    }
};
//height function
int getheight(Node* root){
    if(!root) return 0;
    return root->height;
};
//check the balancing of tree
int getbalance(Node* root){
    return getheight(root->left)-getheight(root->right);
};

//right rotation
Node* rightrotation(Node* root){
    Node* child=root->left;
    Node* childright=child->right;
    child->right=root;
    root->left=childright;
    //update the height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));
    return child;
};
//left rotation
Node* leftrotation(Node* root){
    Node* child=root->right;
    Node* childleft=child->left;
    child->left=root;
    root->right=childleft;
    //update the height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));
    return child;
};

Node* insert(Node* root,int key){
    //doesn't exist
    if(!root) 
    return new Node(key);

    //exist
    if(key<root->data){
        root->left= insert(root->left,key);  //go to left side
    }
    else if(key>root->data){
        root->right=insert(root->right,key);
    }
    else{
        return root;
    }

    //update the height 
    root->height=1+max(getheight(root->left),getheight(root->right));
    //balance check
    int balance=getbalance(root);
    //handle all four cases 

    //left left case
    if(balance>1 && key < root->left->data){
        return rightrotation(root);
    }
    //left right case
    else if(balance>1 && key > root->left->data){
        root->left=leftrotation(root->left);
        return rightrotation(root);
    }
    //right right case
    else if(balance<-1 && root->right->data < key){
        return leftrotation(root);
    }
    //right left case
    else if(balance < -1 && root->right->data > key){
        root->right=rightrotation(root->right);
        return leftrotation(root);
    }
    else{
        return root;
    }
};
void inorder(Node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    return inorder(root->right);
};

int main(){
    Node* root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,12);
    root=insert(root,46);
    root=insert(root,16);
    root=insert(root,36);
    root=insert(root,7);
    
    //print the value in inorder
    inorder(root);
    
}