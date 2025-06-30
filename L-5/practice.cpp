#include<iostream>
using namespace std;
int main(){
    //fibonacci series
    int curr,prev,last;
    int i,n;
    last=0;
    prev=1;
    cout<<"enter the number :";
    cin>>n;
    for(int i=0;i<=n;i++){
        curr=prev+last;
        last=prev;
        prev=curr;
        cout<<curr;
    }
    
   return 0;


}