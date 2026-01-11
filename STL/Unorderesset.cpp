#include<iostream>
#include<bits/stdc++.h> //or #include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);
    s.insert(40);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}