#include<iostream>
using namespace std;
int main()
{
    // power of 2
     int x;
    cout<<"enter the input :";
    cin>>x;
    if(x<1)
    {
    cout<<"no";
    }
    while(x!=1)
    {
        if(x%2==1)
        cout<<"no";
        break;
        x/=2;
    }
    if(x==1){
    cout<<"yes,it is power of 2";
    }
}
