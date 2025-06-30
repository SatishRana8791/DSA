#include<iostream>
using namespace std;
int main()
{
    //2 matrices A and B, Print A-B
    int n=3;
    //first matrix A
    cout<<"enter the first matrix element :";
    int matrixA[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrixA[i][j];
        }
    }
    //second matrix B
    int matrixB[3][3];
    cout<<"enter the second matrix element :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrixB[i][j];
        }
    }
    //difference between two matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrixA[i][j]-matrixB[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}