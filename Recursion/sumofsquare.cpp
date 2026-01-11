#include<iostream>
using namespace std;
int sumofsquare(int num)
{
    if(num==1){
        return 1;
    }
    return sumofsquare(num-1)+num*num;

}
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<sumofsquare(n);

}