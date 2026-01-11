#include<iostream>
#include<queue>
using namespace std;
//funvtion to print triplet
void display(queue<int>q)
{
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
};


int main()
{
    //print all number in every window of size k
    queue<int>q;
    int arr[6]={2,3,4,5,6,7};
    int n=6;
    int k=3;
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }
    for(int i=k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }
}