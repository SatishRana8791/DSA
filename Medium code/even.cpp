#include<iostream>
#include<vector>
using namespace std;

//Find the Number of even elements in a given array of size N

vector<int> even(int arr[],int index,int n,vector<int>& temp){
    
    if(index==n){
        return temp;
    }


    if(arr[index]%2==0){
        temp.push_back(arr[index]);
    }
    return even(arr,index+1,n,temp);
}


int main(){
    
    int arr[]={2,5,7,8,31,24};
    vector<int> temp;
    temp= even(arr,0,6,temp);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}