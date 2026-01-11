#include<iostream>
using namespace std;
int main()
{
  //Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
  char arr[100];
  for(int i=0;i<26;i++)
  {
    char name='a'+i;
    cout<<char(name)<<" ";
  }

}