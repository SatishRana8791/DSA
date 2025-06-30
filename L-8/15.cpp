#include<iostream>
using namespace std;
int main()
{
    //complement of a number
    int num,rem,ans=0,mul=1;
    cout<<"enter the input :";
    cin>>num;
    while(num!=0)
    {
        rem=num%2;
        rem=rem^1;
        num/=2;
        ans=ans+rem*mul;
        mul=mul*2;
    }
    cout<<ans;
}