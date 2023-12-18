#include<bits/stdc++.h>
using namespace std;
    int n,e;

    int graph[10000][10000];
    int vis[1000000];

void dfs(int node){
    cout<<node<<" ";
    vis[node]=1;

    for (int i = 1; i <= n; i++)
    {
        if((graph[node][i] != 0)  && (vis[i]==0)){
            dfs(i);
        }
    }
    

}



int main(){
    cin>>n>>e;
    for (int i = 1; i <= e; i++)
    {
        int u,v;cin>>u>>v;
        graph[u][v]= 1;
        graph[v][u] = 1;
    }

    dfs(1);
    
}