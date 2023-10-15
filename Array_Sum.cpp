#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<int> vp;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int m,k;cin>>m>>k;
        if (k<=m)
        {
            cout<<-1<<endl;
            
        }
        else{
            v vv;
        for (int i = 1; i <m; i++)
        {
            vv.pb(i);
        }

        int n=m-1;
        int sum=n*(n+1)/2;
        vv.pb(k-sum);

        for (int i = 0; i < m; i++)
        {
            cout<<vv[i]<<" ";
        }cout<<endl;
        }

        
        
    }
    
     

    return 0;
}