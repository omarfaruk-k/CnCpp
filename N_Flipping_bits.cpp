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

// int flipBits(int a){
//     vec v;
//     v.assign(32,0);

//     for(int i=31;a>0;i--){
//         v[i]=(a%2);
//         a/=2;
//     }
//     for (int i = 0; i < 32; i++)
//     {
//         v[i]=!v[i];
//     }
    
    
//     int res=0;
//     reverse(v.begin(),v.end());

//     for (int i=0;i<32;i++)
//     {
//         if(v[i]==1) res+=pow(2,i);
//     }

//     return res;
    
// }

int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int a;cin>>a;
        bitset<32> bit(a);
        bit.flip();
        int ans = bit.to_ullong();
        cout<<ans<<endl;

        // int res= flipBits(a);
        // cout<<res<<endl;
    }
    
     

    return 0;
}