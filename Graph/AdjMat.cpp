#include<iostream>
#include<vector>
using namespace std;

//making graph adjacency matrix
int main(){

    int vertex,edges;
    cin>>vertex>>edges;
    
    vector<vector<bool>>AdjMat(vertex,vector<bool>(vertex,0));
    int u,v;  //taking the nodes connnection like 1->2 || 1->3
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
    }

    //print the matrix
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

}

//time & space complexity = O(n2)