#include<iostream>
using namespace std;
int main()
{
    //linear search
    cout<<"enter the elements :";
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    int x=5;
    for(int i=0;i<5;i++)
    {
        if(x==arr[i])
        {
            cout<<i;
        }
        
    }
    
    
}