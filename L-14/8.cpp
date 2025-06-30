#include<iostream>
using namespace std;
//There are three numbers a,b,c. Put the value of a into b, put value of b into c and 
//put value of c into a. Do it using Function.

void swapthree(int &a,int &b,int &c)
{
    int a,b,c;
    a=a+b+c;
    b=a-(b+c);
    c=a-(b+c);
    a=a-(b+c);
   
}
int main()
{
    int a,b,c;
    cout<<"input three numbers :";
    cin>>a>>b>>c;
    swapthree(a,b,c);
    cout<<a<<b<<c;
    
    return 0;
}
//not run check again