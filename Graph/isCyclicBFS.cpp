#include<bits/stdc++.h>
using namespace std;


int visited[10001];

vector<int>graph[10001];

int main(){
    int node,edge;
    cin>>node>>edge;

    int u,v;
    //edge input
    for(int i=0; i< edge; i++){
         cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    //bfs
    queue<int> q;
    map<int,int> par;
    int cycle = 0;
    

    int a = 1;
    visited[a]=1;
    q.push(a);


    while(!q.empty()){
        a = q.front();
        q.pop();
        for (int i = 0; i < graph[a].size(); i++)
        {
            int b = graph[a][i];
            if(visited[b]==0) {
                visited[b] = 1;
                par[b]=a;
                q.push(b);
            }
            else if(par[b]!=a) {

                cycle = 1;
                break;
            }
        }
        
    }

    if(cycle == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
    
}