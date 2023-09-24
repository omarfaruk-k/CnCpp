#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;
using ull=unsigned long long;

typedef vector<ll>  v;
typedef pair<ll,ll> pll;
typedef vector<pll> vp;

#define pb push_back
#define pop pop_back


int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        ld n;cin>>n;
        ll m=n;
        if(m==n) cout<<1<<endl;
        else {
            n=n-m;
            cout<<1/n<<endl;
        }
    }
    

    return 0;
}