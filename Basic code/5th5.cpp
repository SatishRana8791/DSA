#include<iostream>
using namespace std;
int main()
{
    //check the number is prime or not 
    int n;
    cout<<"enter the number :";
    cin>>n;
    if(n<2)
    {
        cout<<"not prime ";
    }
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"not prime";
                return 0;
            }
           
        }
         cout<<"prime ";
         return 0;
    }
    
}