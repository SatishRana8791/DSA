#include<iostream>
using namespace std;
int main()
{
    //binary to decimal conversion
    
     int num=1101;
        int rem,ans=0,mul=1;
    while (num)
    {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*2;
    }
    cout<<ans;
    
}