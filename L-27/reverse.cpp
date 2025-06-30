#include<iostream>
using namespace std;
int main()
{
   //Reverse each column of the matrix.
   int n=4;
   int matrix[4][4];
   cout<<"enter the matrix element :";
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>matrix[i][j];
       }
   }
   for(int i=0;i<n;i++){
       int start=0,end=n-1;
       while(start<end){
           swap(matrix[start][i],matrix[end][i]);
           start++;
           end--;
       }
   }
   for (int i = 0; i < n; i++) {
       for (int j = 0; j < n; j++) {
           cout << matrix[i][j] << " ";
       }
       cout << endl;
   }
return 0;    
}