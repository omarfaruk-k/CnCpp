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

    bool home;
    if(tc%2==0) home = true;
    else  home = false;

    string s;cin>>s;
    while (tc--)
    {
        cin>>s;
    }
    
     if(home) cout<<"home"<<endl;
     else cout<<"contest"<<endl;

    return 0;
}