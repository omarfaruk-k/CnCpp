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

        vec v;

        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        int sol = 0;

        // if(v[0]==1){
        //     for(auto i:v){
        //         if(i!=1) sol+=(i-1);
        //     }
        // }
        // else {
            int m = 2*v[0];
            for(auto i:v) sol += (i-1)/(m-1);
        // }
        
        
        
        cout<<sol<<endl;

        
        
    }
    
     

    return 0;
}