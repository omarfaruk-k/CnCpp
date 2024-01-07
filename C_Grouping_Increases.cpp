#include<bits/stdc++.h>
using namespace std;

//#define int long long
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

        vec v; int cnt=0;

        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            v.pb(a);
        }

        //if(is_sorted(v.begin(),v.end())) cout<<n-2<<endl;
        // else{

            for (int i = 0; i < n-1; i++)
            {
                if(v[i]<v[i+1]) cnt++;
            }
            
            if(!is_sorted(v.begin(),v.end())) cout<<max((cnt-1),0)<<endl;
            else if(cnt!=0 && is_sorted(v.begin(),v.end())) cout<<max(n-2,0)<<endl;
            else cout<<0<<endl;

            //cout<<cnt-1<<endl; cnt!=0 && 
       // }
        

    }
    
     

    return 0;
}