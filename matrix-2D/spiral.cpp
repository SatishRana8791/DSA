#include<iostream>
using namespace std;
int main()
{
    int arr[6][6];
    //take inputs of 2d array
    cout<<"take inputs :";
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }
    print output of 2d array
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
//int top,right,left,bottom;
//    top=0,right=5,bottom=5,left=0;
//    while(top<=bottom && left<=right){
//        for(int j=left;j<=right;j++){
//            cout<<arr[top][j];
//            top++;
//        }
//        for(int i=top;i>=bottom;i++){
//            cout<<arr[i][right];
//            right--;
//        }
//        for(int j=right;j>=left;j--){
//            cout<<arr[bottom][j];
//            bottom--;
//        }
//        for(int i=bottom;i>=top;i--){
//            cout<<arr[i][left];
//            left++;
//        }
//    }
    
}