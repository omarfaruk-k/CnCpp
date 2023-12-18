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
        int n,e;
        cin>>n>>e;

        map<char, int> mp;


        for (int i = 0; i < n; i++)
        {
            char c;cin>>c;
            if(mp.find(c) == mp.end()){
                mp.insert({c,1});
            }else mp[c]++;
        }

        int cnt=0;

        for(auto i:mp){
            if(i.second%2 != 0) cnt++;
        }
        //cout<<cnt<<endl;
         if((cnt-1)<= e) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
    
     

    return 0;
}