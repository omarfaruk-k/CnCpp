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
    

    int m,n;
    bool signal=true;
    cin>>m>>n;

    int l=m*n;

    while (l--)
    {
        char c;cin>>c;
        if(c=='C' || c=='M' || c=='Y') signal=false;

    }
    
    if(signal) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;


    return 0;
}