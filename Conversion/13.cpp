#include<iostream>
using namespace std;
int main()
{
    //check leap year 
    int year;
    cout<<"enter the year :";
    cin>>year;
    if(year%400==0){
        cout<<"leap year";
    }
    else if(year%4==0 && year%100!=0)
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"not a leap year";
    }
}