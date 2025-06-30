#include<iostream>
using namespace std;
int main()
{
    //sum of diagonal elements 
    int n=3;
    int matrix[3][3];
    cout<<"enter the matrix element :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=matrix[i][i];
    }
    cout<<sum;
}