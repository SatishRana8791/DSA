#include<iostream>
using namespace std;
//covert 'a' to 'A'
char convert(char name)
{
    char ans=name-'a'+'A';
    return ans;
}
int main()
{
    char name;
    cin>>name;
    cout<<convert(name);
}