#include<iostream>
using namespace std;
//use of static data member

class customer{
    string name;
    int account_number;
    int balance;
    static int total_customer;
    static int total_balance;

//parametrized constructor
public:
    customer(string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
        total_customer++;
        total_balance+=balance;
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
        
    }
    void display_total(){
        cout<<"total number of customers :"<<total_customer<<endl;
        cout<<"total balance :"<<total_balance;
    }
    void deposit(int amount)
    {
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }
    void withdrawl(int amount){
        if(amount>0 && amount <=balance){
            balance-=amount;
            total_balance-=amount;
        }
    }

};

int customer::total_customer=0;
int customer::total_balance=0;

int main()
{
    customer A1("rahul",23,4500);
    customer A2("rana",24,1200);
    customer A3("jeetu",25,1000);
    
    //A1.display();
    //A2.display();
    //A3.display();
    A1.deposit(500);
    A3.withdrawl(1000);
    A1.display_total();
    

}