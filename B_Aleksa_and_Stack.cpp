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
        int n;cin>>n;
        int cnt=3;
        int num=11;
        v vv;

        vv.pb(5);
        vv.pb(7);
        vv.pb(11);
        int i=2;
        while (1)
        {
            if(cnt==n) break;
            num+=2;
            if(num%(vv[i-1]+vv[i])!=0) {
                vv.pb(num);
                cnt++;
            } 
            
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<vv[i]<<" ";
        }cout<<endl;
        

    }
    
     

    return 0;
}