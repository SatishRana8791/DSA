#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    int roll_number;
    string grade;
    //function Getter and Setter method
    public:
    void setname(string s){
        if(s==""){
            cout<<"invalid string";
        }
       

        name=s;
    }
    void setage(int a){
        age=a;
    }
    void setroll_number(int r){
        roll_number=r;
    }
    //getter function

    string getname(){
        return name;
    }
    int getroll_number(){
        return roll_number;
    }
    
};



int main(){
     student s1;
     s1.setname("rana");
     s1.setage(21);
     s1.setroll_number(123);
     
     cout<<s1.getname()<<endl;
     cout<<s1.getroll_number()<<endl;
}