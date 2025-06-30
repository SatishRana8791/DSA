#include<iostream>
using namespace std;
int main()
{
    //reverese the number
    int num,rem,ans=0;
    cout<<"enter the input :";
    cin>>num;
    if(num<0){
    cout<<0;
    }
    while(num!=0){
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    cout<<ans;
    }

