#include<bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;
using ull=unsigned long long;

typedef vector<ll>  v;
typedef pair<ll,ll> pll;
typedef vector<pll> vp;

#define pb push_back
#define pop pop_back


int main(){
    int tc;cin>>tc;
    while (tc--)
    {
        ll n,a,max;
        ll sum=0;
        cin>>n>>a>>max;
        if(a>n || (a-1)>max) cout<<-1<<endl;


        else
        {   
            ll j=0;

            while (j<a)
            {
                sum+=j;
                j++;
            }
            n=n-a;
            if (max==a)
            {
                max--;
            }
            
            while (n--)
            {
                sum+=max;
            }
            
            

            cout<<sum<<endl;
        }
        
    }
    

    return 0;
}