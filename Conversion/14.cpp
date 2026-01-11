#include<iostream>
using namespace std;
int main()
{
    //add digits to form a single digit answer
    int num;
    cout<<"enter the input :";
    cin>>num;
    while(num>9){
        int rem,ans=0;
        while(num!=0)
        {
        rem=num%10;
        num=num/10;
        ans=ans+rem;
        }
        num=ans;
    }
    cout<<num;
    
}