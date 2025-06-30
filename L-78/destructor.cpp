#include<iostream>
using namespace std;


//destructor uses 

class customer{
     string name;
     int *data;

     public:
     //call constructor
     customer(string name){
          this->name=name;
          cout<<"constructor is "<<name<<endl;
     }


     //destructor uses

     ~customer(){
        cout<<"destructor is "<<name<<endl;
     }

};

int main()
{
    customer A1("1"),A2("2"),A3("3");

}