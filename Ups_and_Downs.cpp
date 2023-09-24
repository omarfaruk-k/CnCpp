#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;
using ull=unsigned long long;

typedef vector<ll>  vec;
typedef pair<ll,ll> Pair;
typedef vector<Pair> vecPair;

#define pb push_back
#define pop pop_back


int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        ll n;cin>>n;
        vec vv;
        vec ans;
        
        for (ll i = 0; i < n; i++)
        {
            ll a;cin>>a;
            vv.pb(a);
        }

        sort(vv.begin(), vv.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout<<vv[i]<<endl;
        // }
        // if(n%2==0){
            ll i=0,j=n-1;
            while(i<=j){
                ans.pb(vv[i]);
                ans.pb(vv[j]);
                i++;j--;
            }
        // }
        
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }cout<<endl;
        
        
    }
    

    return 0;
}