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
    set<pair<string,string>> s;
    while (tc--)
    {
        string a,b;
        cin>>a>>b;
        s.insert({a,b});
    }

    cout<<s.size()<<endl;
     

    return 0;
}