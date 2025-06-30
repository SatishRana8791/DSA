#include<iostream>
using namespace std;
int main()
{
    //check the person is adult or teenager 
    int age;
    cout<<"enter the age :";
    cin>>age;
    if(age>18){
        cout<<"adult";
    }
    else
    {
        cout<<"teenager";
    }
    return 0;
}