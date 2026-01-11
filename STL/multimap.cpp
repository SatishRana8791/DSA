#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    multimap<int,int>m;  
    m.insert(make_pair(20,30));
    m.insert(make_pair(10,40));
    m.insert(make_pair(30,50));
    m.insert(make_pair(30,50));
    m.insert(make_pair(10,50));
    // m[50]=9;   //these are not allowed to give values
    // m[60]=5;   //same here
    m.erase(30); 

    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}