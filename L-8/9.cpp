#include<iostream>
using namespace std;
int main()
{
    //octal to decimal conversion
    int rem,mul=1,ans=0,num;
    cout<<"enter the input :";
    cin>>num;
    while(num){
        rem=num%10;
        num/=10;
        ans=rem*mul+ans;
        mul*=8;
    }
    cout<<ans;
}