#include<iostream>
using namespace std;
int main(){
    //Print sum of each column in 2D array.
    int n=3;
    int matrix[3][3];
    cout<<"enter the matrix element :";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    //sum calculate of column elements
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            
            sum+=matrix[j][i];
        }
        cout<<sum<<endl;
    }
 return 0;

}