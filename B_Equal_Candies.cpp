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
        int sml = INT_MAX;

        vec v;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            if(sml>a) sml = a; 
            v.pb(a);
        }

        int sum =0;

        for(auto i:v) sum+=i-sml;
        
        cout<<sum<<endl;
    }
    
     

    return 0;
}