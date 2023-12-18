#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int n;cin>>n;

        vector<int> graph[n+1];

        int cnt=0;

        for (int i = 0; i < n-1; i++)
        {
            int u,v; cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for (int i = 0; i <= n; i++)
        {
            if(graph[i].size() == 1) cnt++;
        }
        
        cout<<(cnt+1)/2<<endl;
        
        
    }
    
     

    return 0;
}