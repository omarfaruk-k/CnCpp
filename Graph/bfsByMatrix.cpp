#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define ppb pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;


int node,edge;
int matOfGraph[1000][1000];
int Visit[1001];



void bfs(int start){

    queue<int> q;
    cout<<start<<" ";
    Visit[start]=1;
    q.push(start);
    while (!q.empty())
    {
        int a=q.front();
        q.pop();
        for (int i = 1; i <= node; i++)
        {
            if(Visit[i]==0 && matOfGraph[a][i]!=0){
                cout<<i<<" ";
                q.push(i);
                Visit[i]=1;
            }
        }
        
    }
    

}



int32_t main(){

    cin>>node>>edge;
    int u,v;

    for (int i = 1; i <= edge; i++)
    {
        cin>>u>>v;
        matOfGraph[u][v]=1;
        matOfGraph[v][u]=1;
    }
    
    // for (int i = 1; i <= node; i++)
    // {
    //     for (int j = 1; j <= node; j++)
    //     {
    //         cout<<matOfGraph[i][j]<<" ";
    //     }cout<<endl;
        
    // }
    
     bfs(1);

    return 0;
}