#include<iostream>
using namespace std;
int main(){
    //sum of square of n first natural numbers 
    int i,sum,n;
    sum=0;
    cout<<"enter the number :";
   cin>>n;
   for(i=1;i<=n;i++){
    sum=sum+i*i*i;
   }
   cout<<sum<<endl;
     
}