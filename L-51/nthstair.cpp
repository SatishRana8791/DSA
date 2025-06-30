#include<iostream>
using namespace std;
//can take only 1 or 2 step at a time
//we have find total ways to reach to a particuar position
int nthstair(int n)
{
    if(n<=1){
        return 1;
    }
    return nthstair(n-1)+nthstair(n-2);
}
int main(){
    int num;
    cout<<"enter the stair number :";
    cin>>num;
    cout<<nthstair(num);
}