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
        vec v;
        int n=3;
        while (n--)
        {
            int a;cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        int a = v[0], b=v[1], c=v[2];

        int cnt=0;

        while (b!=a && cnt<4)
        {
            b-=a;cnt++;
        }

        while (c!=a && cnt<4)
        {
            c-=a;
            cnt++;

        }
        
        if(cnt>3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
        
        
    }
    
     

    return 0;
}