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

        int a;cin>>a;
        v vv;
        while (a>0)
        {
            vv.pb(a%2);
            a/=2;
        }
        int cnt=0;
        for(int i= vv.size()-1;i>=0;i--){
            if(vv[i]==1) cnt++;
            //cout<<vv[i]<<" ";
        }
        cout<<cnt<<endl;
            
     

    return 0;
}