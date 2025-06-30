#include<iostream>
using namespace std;

//calling constuctor
class customer
{
    string name;
    int account_number;
    int balance;

    public:
    //default constructor
    customer(){
        cout<<"default constructor is called"<<endl;
        name="mohit";
        account_number=222;
        balance=777;
    }

    //parametrized constructor
    customer(string a,int b,int c)
    {
        name=a;
        account_number=b;
        balance=c;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;
    }
};


int main()
{
    
    customer A2("rohit",123,1000);
    customer A1(A2);
    A1.display();
    //A2.display();
}