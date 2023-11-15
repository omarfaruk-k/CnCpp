#include<bits/stdc++.h>
using namespace std;

int main(){
      int n,e;
      cin>>n>>e;
      int graph[n+1][n+1];

        

      for (int i = 1; i <= e; i++)
      {
        int u,v; cin>>u>>v; //for weighted graph, input w and instead of 1, store w
        graph[u][v] = 1;
        graph[v][u] = 1;
      }
      

      for (int i = 0; i <= n; i++)
      {
        for (int j = 0; j <= n; j++)
        {
            cout<<graph[i][j]<<" ";
        }cout<<endl;
        
      }
      

}