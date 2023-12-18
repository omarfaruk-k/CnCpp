#include<bits/stdc++.h>
using namespace std;

int n,e;
vector<int>vec[100];
int visited[10000];


void dfs(int node){
    cout<<node<<" ";
    visited[node]=1;

    for (int i = 0; i < vec[node].size(); i++)
    {
        int v = vec[node][i];
        if(visited[v]==0){
            dfs(v);
        } 
    }
    

}




int main(){
    cin>>n>>e;
    for (int i = 1; i <= e; i++)
    {
        int u,v;cin>>u>>v;
        vec[v].push_back(u);
        vec[u].push_back(v);

    }

    dfs(1);
    
}