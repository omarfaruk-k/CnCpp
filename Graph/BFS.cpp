#include<bits/stdc++.h>
using namespace std;


int visited[10001];
vector<pair<int,int>>graph[10001];

int main(){
    int node,edge;
    cin>>node>>edge;

    int u,v,w;
    //edge input
    for(int i=0; i<= edge; i++){
         cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    //bfs
    queue<int> q;

    int a = 1;
    visited[a]=1;
    cout<<a<<" ";
    q.push(a);


    while(!q.empty()){
        a = q.front();
        q.pop();
        for (int i = 0; i < graph[a].size(); i++)
        {
            int b = graph[a][i].first;
            if(visited[b] == 0) {
                visited[b] = 1;
                q.push(b);
                cout<<b<<" ";
            }
        }
        
    }

    cout<<endl;
    
}