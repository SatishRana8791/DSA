#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    if(n<2){
	        cout<<"no"<<endl;
	    }
	    else{
	        for(int i=2;i<n;i++){
	            if(n%i==0){
	                cout<<"no"<<endl;
	                return 0;
	            }
	        }
	        cout<<"yes"<<endl;
	        
	    }
	}

}
