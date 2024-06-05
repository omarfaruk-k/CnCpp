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

    int n,m;
    cin>>n>>m;

    vec v;
    for (int i = 0; i < n; i++)
    {
        int a;cin>>a;
        v.pb(a);
    }

    int tot = 0;

    for (int i = 0; i < n; i++)
    {
        tot+=v[i];
        if(tot<m) cout<<0<<" ";
        else {
            cout<<tot/m<<" ";
            tot = tot%m;
        }
    }
    
        
     

    return 0;
}