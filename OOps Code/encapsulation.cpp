#include<iostream>
using namespace std;

//use of encapsulation 
class customer{
    string name;
    int account_number,balance;
    int age;

    public:

    customer(string name,int account_number,int balance,int age){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        this->age=age;
    }

    void check_age(int age){
        if(age>0&&age<100){
            this->age=age;
        }
        else{
            cout<<"invalid age"<<endl;
        }
    }
void withdrawl(int amount){
    if(amount>0 && amount<balance){
        balance-=amount;
    }
    else{
        cout<<"invalid amount"<<endl;
    }
}

void display(){
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<age<<endl;
}

};
int main()
{
    customer A1("rahul",2,55,25);
    customer A2("rana",10,1000,78);
    
    A1.check_age(-45);
    A1.withdrawl(-25);
    A1.display();
    A2.display();
}