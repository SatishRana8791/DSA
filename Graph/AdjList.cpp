#include<iostream>
#include<vector>
using namespace std;

//undirected graph (no weight) ->adjacency list
int main(){
    int vertex,edges;
    cin>>vertex>>edges;

    int u,v;
    vector<int>Adjlist[vertex];
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        Adjlist[u].push_back(v);
        Adjlist[v].push_back(u);
    }

    //print the list 
    for(int i=0;i<vertex;i++){
        cout<<i<<"->";
        for(int j=0;j<Adjlist[i].size();j++){
            cout<<Adjlist[i][j]<<" ";
        }
        cout<<endl;
    }
}