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
    map<int,int> mp;
    while (tc--)
    {
        int a;cin>>a;
        mp[a]++;
    }

    int ans=0;

    for(auto i:mp){
        if(i.second>ans) ans=i.second;
    }

    cout<<ans<<endl;

     

    return 0;
}