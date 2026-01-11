#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>p;
    //if we want to print min heap then 
    //priority_queue<int, vector<int>, greater<int>>p
    p.push(10);
    p.push(14);
    p.push(18);
    p.push(25);
    p.push(8);

    cout<<p.top()<<endl;
    p.pop();
    cout<<p.top()<<endl;
    //size
    cout<<p.size()<<endl;

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
}