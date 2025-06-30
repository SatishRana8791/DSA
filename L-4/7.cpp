#include<iostream>
using namespace std;
int main()
{
    //print the number that is divisible by 4 from 1 to n
    int i,n;
    cout<<"enter the number :";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%4==0){
            cout<<i<<endl;
        }
    }
}