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
        int n;cin>>n;
        int p=0,m=0;

        string s;cin>>s;

        for(auto i:s) {
            if(i=='+') p++;
            else if(i=='-') m++;
        }

        if(m>p) cout<<m-p<<endl;
        else cout<<p-m<<endl;
        
    }
    
     

    return 0;
}