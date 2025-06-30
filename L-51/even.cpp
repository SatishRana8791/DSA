#include<iostream>
using namespace std;
void printeven(int num,int N){
    if(num==N){
        cout<<num<<endl;
        return;
    }
    
    printeven(num+2,N);
    cout<<num<<" ";
}
int main()
{
    int num=2,N=20;
    printeven(num,N);
}