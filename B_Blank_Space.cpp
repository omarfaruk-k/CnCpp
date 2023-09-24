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
        int n;cin>>n;
        int cnt=0,maxi=0;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            if(a==0) cnt++;
            else {
                maxi=max(maxi,cnt);
                cnt=0;
                }
        }
        cout<<max(maxi,cnt)<<endl;
    }
    

    return 0;
}