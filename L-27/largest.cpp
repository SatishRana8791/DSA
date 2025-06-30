#include<iostream>
using namespace std;
int main()
{
    // print the largest element in the 2D array.

    int n=4;
    int matrix[4][4];
    cout<<"enter the matrix element :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int max=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max<matrix[i][j])
            {
                max=matrix[i][j];
            }   
        }
    }
    cout<<max;
}