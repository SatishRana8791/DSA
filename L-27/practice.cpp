#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    //
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[1000];
	    int n;
	    cin>>n;
	    for(int i=1;i<=n+1;i++){
	        cin>>arr[i];
	    }
	    for(int i=1;i<n+1;i++){
	        for(int i=1;i<n+1;i++){
	        if(arr[i]>arr[n+1]){
	            if(arr[i]<=2*arr[n+1]){
	            swap(arr[i],arr[n+1]);
	        }
	        }
	        
	    }
	    }
        int sum=0;
        for(int i=1;i<n+1;i++){
             sum+=arr[i];
        }
        cout<<arr[];
        cout<<sum;
	    
	    
	}

}
