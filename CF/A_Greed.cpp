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

    int sum=0;
    for (int i = 0; i < tc; i++)
    {
        int a;cin>>a;
        sum+=a;
    }

    vec v;
    for (int i = 0; i < tc; i++)
    {
        int a;cin>>a;
        v.pb(a);
    }

    sort(v.rbegin(),v.rend());

    int cap = v[0]+v[1];

    if(cap<sum) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    
    
     

    return 0;
}