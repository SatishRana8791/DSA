#include<iostream>
using namespace std;
int main()
{
    //reverse of an array
    int arr[6]={2,3,4,5,6,7};
    int i=0,j=5;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}