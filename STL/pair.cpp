#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//name,age,weight    taking two as one 
int main()
{
    // pair<string,int>p;
    // p=make_pair("rohit",20);  //method 1
    // p.first="rohit";  //method 2
    // p.second=20;      //method 2

    pair<string,pair<int,int>>p;
    // p.first="rahul";
    // p.second.first=20;
    // p.second.second=60;
    p=make_pair("rohit",make_pair(20,70));
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}