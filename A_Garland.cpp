#include<bits/stdc++.h>
using namespace std;

#define int long long


int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        string s;
        cin>>s;

        map<char,int> mp;

        for (int i = 0; i < 4; i++)
        {
            if(mp.find(s[i]) == mp.end()) mp.insert({s[i],1});
            else mp[s[i]]++;
        }
        
        int boro=0;

        for(auto i:mp) {
            if(i.second>boro) boro=i.second;
        }

        if(boro== 4 ) cout<<-1<<endl;
        else if(boro==1) cout<<4<<endl;
        else cout<<boro*2<<endl;

    }
    
     

    return 0;
}