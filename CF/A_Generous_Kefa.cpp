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
    int a,b;cin>>a>>b;
    map<char,int> hash;
    
    for (int i = 0; i < a; i++)
    {
        char cc;
        cin>>cc;

        if (hash.find(cc) == hash.end())
        {
            hash.insert({cc,1});
        }
        else hash[cc]++;
    }

    for(auto i:hash){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
     

    return 0;
}