#include<iostream>
#include <limits.h>
using namespace std;
int main()
{
    //print the smallest element in the 2D arrays. 
int matrix[3][3];
 int n=3;
 cout<<"enter the elements of matrix :";
 for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
int min=INT_MAX;
for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(min>matrix[i][j])
            {
                min=matrix[i][j];
            }   
        }
    }
cout<<min;
}