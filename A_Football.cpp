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
    string s;
    map<string, int> mp;

    while (tc--)
    {
        string a;cin>>a;
        if(mp.count(a)==0) mp.insert({a,1});
        else mp[a]++;
    }
    int maxx=0;
    for(auto i:mp){
        if(i.second>maxx){
            s=i.first;
            maxx=i.second;
        }
    }

     
    cout<<s<<endl;


    
    
     

    return 0;
}