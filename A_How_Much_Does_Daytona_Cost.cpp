#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<int> vp;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int n,m,k;cin>>n>>m;
        bool is =false;
        for (int i = 0; i < n; i++)
        {
            cin>>k;
            if(k==m) is=true;
        }
        

        if(is==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
     

    return 0;
}