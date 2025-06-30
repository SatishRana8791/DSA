#include<iostream>
using namespace std;
int main()
{
    // factorial calculation
    int i,n,mul;
    cout << "enter the number :";
    cin >> n;
    mul=1;
    for(i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    cout<<mul<<endl;
    return 0;
}