#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<int> vp;



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        string s;
        cin>>s;
        int n=s.length();
        for (int i = 0; i < n/2; i+=2)
        {
            cout<<s[i];
        }cout<<endl;
        
    }
    
     

    return 0;
}