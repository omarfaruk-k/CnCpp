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

    vector<string> r;
    vector<string> wc;
    vector<string> m;
    vector<string> cap;
    while (tc--)
    {
        string a,b;
        cin>>a>>b;
        if(b[0]=='r') r.push_back(a);
        else if(b[0] == 'w' || b[1] == 'h') wc.pb(a);
        else if(b[0]=='m') m.pb(a);
        else if(b[0] == 'c') cap.pb(a);
    }

    for( auto i:r) cout<<i<<endl;
    for( auto i:wc) cout<<i<<endl;
    for( auto i:m) cout<<i<<endl;
    for( auto i:cap) cout<<i<<endl;
    
    
     

    return 0;
}