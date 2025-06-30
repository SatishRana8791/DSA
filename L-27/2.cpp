#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //prefix sum
    
    //declare a vector
    vector<int>prefix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    for(auto it=prefix.begin();it!=prefix.end();it++){
        cout<<*it<<" ";
    }

    //suffix sum
    for(auto it=prefix.rbegin();it!=prefix.rend();it++){
        cout<<*it<<" ";
    }
}