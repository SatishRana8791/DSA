#include<iostream>
using namespace std;
print(int arr,int index,int n){
    if(index==n){
        return;
    }
    return (arr,index+1,n);
}
int main(){
    int arr[]={3,7,6,2,8};
    cout<<print(arr,0,5);
}