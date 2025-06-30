#include<iostream>
using namespace std;

//Given a Number N, check whether it is prime or not using Recursion.

prime(int start,int n){

 
 if(n<=1){ return 0;}
 if(n==2 || n==3){ return 1;}
 if(n%start==0){
    return 0;
 }
 if(start*start>n){ return 1;}
  
 prime(start+1,n);


}


int main()
{
   int n;
   cout<<"enter the number :";
   cin>>n;
   cout<<prime(2,n);
}