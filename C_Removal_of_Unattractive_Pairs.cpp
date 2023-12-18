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
        string s;cin>>s;

        map<char,int> mp;

        for (int i = 0; i < n; i++)
        {
            if(mp.find(s[i]) ==mp.end()) mp.insert({s[i],1});
            else mp[s[i]]++;
        }

        int mx=INT_MIN;
        int sum=0;
        for(auto i:mp){
            if(i.second>mx) mx=i.second;
            sum+=i.second;
        }
        sum-=mx;
        
        if(sum<mx) cout<<mx-sum<<endl;
        else if(n%2==0) cout<<0<<endl;
        else cout<<1<<endl;

        
    }
    
     

    return 0;
}