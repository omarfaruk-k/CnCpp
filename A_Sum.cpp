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



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c || a+c==b || b+c==a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
     

    return 0;
}