#include<iostream>

#include<cmath>
using namespace std;
//cube of a num using fun


int cube(int num)
{
   return pow(num,3);
}
int main()
{   int num;
   cout << "Your number is: "<<endl;
   cin>>num;
   int n=cube(num);
   cout<<n;
   
    return 0;

}