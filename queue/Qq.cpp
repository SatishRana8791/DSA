#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;//create a queue 
    q.push(8);
    q.push(9);
    q.push(7);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size();
}