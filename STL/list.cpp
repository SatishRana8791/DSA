#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//iterator to iterate over list
50 20 10 30 
int main()
{
    list<int>l1;
    l1.push_back(20);  //push_back
    l1.push_back(10);
    l1.push_back(30);
    l1.push_front(50);   //push_front
    l1.pop_back();
    
    // cout<<l1.front()<<" ";
    // cout<<l1.back()<<" ";
    // cout<<l1.size()<<" ";
    // cout<<l1.empty();
    for(auto it=l1.begin();it!=l1.end();it++){
        cout<<*it<<" ";
    }
}