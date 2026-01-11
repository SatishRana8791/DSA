#include<iostream>
using namespace std;
int sum(int num){
    //base condition
    if(num==1){
        return 1;
    }
    return num+sum(num-1);
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    
    cout<<sum(n);

      
}