#include<iostream>
using namespace std;

//use of inherittance with access modifiers 

class human{
    public:
    string name;
    int age,weight;

};

class student:protected human{
    private:
    int roll_number,fees;

    public:
    student(string name,int age,int weight,int roll_number,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_number=roll_number;
        this->fees=fees;
    }

    void display() {
         cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees<<endl;
    }   

};

int main(){
     student A("rohit",12,23,55,100);
     A.display();

}