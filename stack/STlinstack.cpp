#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(85);
    s.push(86);
    s.push(87);
    s.push(90);
    s.push(25);
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    cout<<s.size()<<endl;
   
}