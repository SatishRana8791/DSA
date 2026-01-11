#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //create a vector(2D)
    int n,m;
    cout<<"enter the number of rows and column ";
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m)); 
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<matrix[i][j];
    //     }
    //     
    // }
    // cout<<endl;
     cout<<"rows ="<<matrix.size()<<endl ;
     cout<<"col ="<<matrix[0].size();
// 
    // //take input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
            
        }
    }
    //print output 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j];
            cout<<" ";
        }
    }
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    void wave(int arr[][4],int row,int col)
    {
        for(int j=0;j<col;j++){
            if(j%2==0){
                for(int i=0;i<row;i++)
                cout<<arr[i][j]<<" ";
            }
            else{
                for(int i=row-1;i>=0;i--){
                    cout<<arr[i][j]<<" ";
               }
            }
        }
    }
}
