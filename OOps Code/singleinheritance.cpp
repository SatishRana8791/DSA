#include<iostream>
using namespace std;

//single level inheritance
class human{
    public:
    string name;
    int age;
    
    public:
    human(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<name<<" "<<age;
    }

    
};
//child class declare

class student:public human{
    
    int fees,roll_no;
    
    public:
    student(string name,int age,int fees,int roll_no):human(name,age){
        //this->name=name;
        //this->age=age;
        this->fees=fees;
        this->roll_no=roll_no;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<fees<<" "<<roll_no;
    }

};


int main(){
    student A1("rahul",19,1000,155);
    A1.display();
      
}