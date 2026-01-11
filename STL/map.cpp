#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(10,40));
    m.insert(make_pair(30,50));
    m[50]=9;
    m[60]=5;   //different way to give values
    m.erase(50);  //delete the key-value
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}