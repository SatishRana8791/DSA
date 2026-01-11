#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//if we want to print the value in reverse order
//set<int,greater<int>>s;
class person{
    public:
    int age;
    string name;
    
    bool operator < (const person & other) const{
        return age > other.age;
    }
};

int main(){

    // set<int>s;

    // s.insert(10);
    // s.insert(20);
    // s.insert(30);
    // s.insert(40);
    // s.insert(50);
    // s.insert(40);
    // s.insert(10);

    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<*it<<" ";  //10 20 30 40 50
    // }
    // if(s.find(40)!=s.end()){
    //     cout<<"present"<<endl;
    // }
    // else{
    //     cout<<"absent";
    // }

    set<person>s;
    person p1,p2,p3;
    p1.age=10,p1.name="rohit";
    p2.age=20,p2.name="mohit";
    p3.age=5,p3.name="sohit";

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<it->age <<" "<<it->name<<endl;
    }

}