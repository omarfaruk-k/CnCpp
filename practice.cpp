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
        int cnt=0;

        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            v.pb(a);
        }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if(v[i]>v[j]){
                swap(v[i],v[j]);
                cnt++;
            }
        }
        
    }
    
        
        cout<<cnt<<endl;
    }
    
     

    return 0;
}