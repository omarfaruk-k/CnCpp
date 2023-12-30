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

        for (int i = 0; i < s.size(); i++)
        {
            if(mp.find(s[i]) == mp.end()){
                mp.insert({s[i],1});
            }
            else mp[s[i]]++;
        }
    int cnt=0;

    for(auto i:mp){
        int a = static_cast<int>(i.first);
        a-=64;
        if(a<=i.second) cnt++;
    }
        
        cout<<cnt<<endl;
        
    }
    
     

    return 0;
}