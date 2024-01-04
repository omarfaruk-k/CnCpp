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
        int ans =0;

        if(n<1400) ans=4;
        else if(1400<=n && n<1600) ans = 3;
        else if(1600<=n && n<1900) ans= 2;
        else if(n>=1900) ans =1;


        cout<<"Division "<<ans<<endl;

    }
    
     

    return 0;
}