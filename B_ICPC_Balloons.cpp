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
        string s; cin>>s;
        
        map<char,int> mp;

        for(auto i:s){
            if(mp.find(i) == mp.end()){
                mp.insert({i,1});
            }
            else mp[i]++;
        }

        int cnt=0;

        for(auto i:mp){
            cnt+= (i.second+1);
        }

        cout<<cnt<<endl;
    }
    
     

    return 0;
}