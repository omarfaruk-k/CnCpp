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
        ll a,b;
        cin>>a>>b;
        ll arr[a], arr2[b],temp[a];
        for (ll i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        for (ll i = 0; i < b; i++)
        {
            cin>>arr2[i];
        }
        
        ll min,max,ans;

        for (ll i = 0; i < a; i++)
        {
            ans=ans^arr[i];
        }

        min=ans;
        max=ans;
        ans=0;

        for (ll i = 0; i < b; i++)
        {
            for (ll j = 0; j < a; j++)
            {
                temp[j]=arr[j]|arr2[i];
            }
            for (ll j = 0; j < a; j++)
            {
                ans=ans^temp[j];
            }
            if(ans>max) max=ans;
            if(ans<min) min=ans;
            ans=0;
            
        }
        


        cout<<min<<" "<<max<<endl;



        

    }
    

    return 0;
}