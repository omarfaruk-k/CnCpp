#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<pll> vp;

v vv;
v prm;
int mx=1000000000;

void sieve(){
    for (int i = 0; i < mx; i++)
    {
        vv.pb(1);
    }

    vv[0]=vv[1]=0;

    for (int i = 2; i*i <=mx; i++)
    {
        if(vv[i]==1){
            for (int j = i*i; j <= mx; j+=i)
            {
                vv[j]=0;
            }
            
        }
    }    
}


void prime_prnt(int n,int m){
    for (int i = n; i <=m; i++)
    {
        if(vv[i]==1) cout<<i<<endl;
    }
    
}

int32_t main(){
    sieve();
    int tc;cin>>tc;
    while (tc--)
    {
        int n,m;cin>>n>>m;
        prime_prnt(n,m);
    }
    
     

    return 0;
}