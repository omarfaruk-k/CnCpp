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
        int o,p;
        cin>>o>>p;

        
    if(p%o==0)
    {
        cout<<p*(p/o)<<endl;
    }
    else cout<<lcm(o,p)<<endl;
        // if(p%2!=0  && o==1) cout<<p*p<<endl;
        // else if(p%2==0 && o==1) cout<<p*2<<endl;
        // // else if(o!=1 && p%2!=0) cout<<o*p<<endl;
        // // else {
        //     int a=p*2;
        //     int i=3;
        //     while (a%o!=0)
        //     {
        //         a = p*i;
        //         i++;

        //     }

        //     cout<<a<<endl;
            
        // }

        //cout<<endl;
    }
    
     

    return 0;
}