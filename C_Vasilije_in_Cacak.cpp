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
        int nn,kk,xx;
        int sum=0;
        cin>>nn>>kk>>xx;
        if(nn<kk || kk==xx) cout<<"NO"<<endl;
        else if((nn/kk)>1) cout<<"NO"<<endl;
        else{
            while (kk--)
            {
                sum+=nn;
                nn--;
            }
            if(sum>=xx) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
  

    }
    
     

    return 0;
}