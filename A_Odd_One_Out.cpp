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

    while (tc--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b) cout<<c<<endl;
        else if(a==c) cout<<b<<endl;
        else if(b==c) cout<<a<<endl;
    }
    
     

    return 0;
}