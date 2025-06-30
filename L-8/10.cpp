#include<iostream>
using namespace std;
int main()
{
    //binary to octal conversion
    //first, binary to decimal
    int rem,num,ans=0,mul=1;
    cout<<"enter the input :";
    cin>>num;

    while(num>0){
        rem=num%10;
        num/=10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<ans<<endl;
     num=ans;
   
    //second, decimal to octal
    while(num>0){
        
        rem=num%8;
        num/=8;
        ans=rem*mul+ans;
        mul*=10;
    }
    cout<<ans;
}