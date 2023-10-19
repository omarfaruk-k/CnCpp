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

    vector<string> s;
    int tc;cin>>tc;

    while (tc--)
    {
        string a;cin>>a;
        bool flag = false;

        for (auto i:s)
        {
            if (i==a)
            {

                flag = true;
                break;
            }
            
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        s.pb(a);
        

    }
    
     

    return 0;
}