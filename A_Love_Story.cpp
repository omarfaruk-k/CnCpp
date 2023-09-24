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
        string actual="codeforces";
        int cnt=0;
        for (int i = 0; i < 10; i++)
        {
            char c;cin>>c;
            if(c!=actual[i]) cnt++;
        }
        cout<<cnt<<endl;
        
    }
    

    return 0;
}