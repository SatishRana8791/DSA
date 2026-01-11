#include<iostream>
#include<vector>
using namespace std;

// adjlist for undirected weighted graph

int main(){
    int vertex,edges;
    cin>>vertex>>edges;

    int u,v,weight;
    vector<pair<int,int>>AdjList[vertex];//taking pair stl to store both weight and node 
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        AdjList[u].push_back(make_pair(v,weight));
        AdjList[v].push_back(make_pair(u,weight));
    }

    //print the list 
    for(int i=0;i<vertex;i++){
        cout<<i <<"->";
        for(int j=0;j<AdjList[i].size();j++){
            cout<<"(" <<AdjList[i][j].first<<", "<<AdjList[i][j].second <<")  ";
        }
        cout<<endl;
    }
}