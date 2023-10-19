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

    set<int> set;
    vec v;
    while (tc--)
    {
        int a;cin>>a; v.pb(a);
        int n;cin>>n;
        while (n--)
        {
            int b;cin>>b;
            set.insert(b);
        }
        
    }
    
     

    return 0;
}