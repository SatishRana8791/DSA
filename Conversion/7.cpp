#include<iostream>
using namespace std;
int main()
{
    //decimal to binary number conversion
    int rem,ans=0,mul=1;
    int  num;
    cout<<"enter the number :";
    cin>>num;

    while(num>0){
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;
    }
    cout<<ans;
}