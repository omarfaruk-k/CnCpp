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

        map<int,int> mp;

        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            if(mp.find(a) != mp.end()) mp[a]++;
            else {
                mp.insert({a,1});
            }
        }
        

        bool pawagese = false;
        for( auto i:mp){
            if(i.second >= 3) {
                cout<<i.first<<endl;
                pawagese = true;
                break;
            }
        }

        if(!pawagese) cout<<-1<<endl;
    }
    
     

    return 0;
}