#include<iostream>
using namespace std;


//Sum of cubes of N natural numbers using Recursion.
int cube(int start,int end){
    if(start>end){
        return 0;
    }
    return (start*start*start) + cube (start+1,end);
    
}


int main()
{
    
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<"sum of first "<< n <<" cube numbers are :"<<cube(1,n);
}