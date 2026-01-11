#include<iostream>
using namespace std;
int main()
{
    //decimal to binary conversion
    int num,ans=0,rem,mul=1;
    cin>>num;
    while (num>0)
    {
       rem=num%2;
       num=num/2;
       ans=rem*mul+ans;
       mul=mul*10;

    }
    cout<<ans;
    
}