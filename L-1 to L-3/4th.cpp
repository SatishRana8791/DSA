#include<iostream>
using namespace std;

int main() 
{
    //check the number is positive or not 
    int num;
    cin>>num;
    if(num>0){
        cout<<"+ve";
    }
    else if (num<0)
    {
        cout<<"-ve";
    }
    else{
        cout<<"zero";
    }
    return 0;
    
}



