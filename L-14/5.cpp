#include<iostream>
using namespace std;
//armstrong no 
bool armstrong(int n,int digit)
{
int n=num,rem,ans=0;
rem=n%10;
n/=10;
ans=ans+power(rem,digit);
if(ans==n){
    return ans;
}
}
int countdigit(int digit){
while(num)
{
    int count=0;
    num/=10;
    count++;
}
return count;
}
int main()
{
    int ans,num;
    cin>>num;
    cout<<ans;

}
//check again code not run