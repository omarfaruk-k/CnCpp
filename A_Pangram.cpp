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

    int n;cin>>n;
    set<char> str;
    while (n--)
    {
        char c;cin>>c;
        str.insert(tolower(c));
    }

    if (str.size()==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    

     

    return 0;
}