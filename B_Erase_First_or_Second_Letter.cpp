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

        set<char> st;
        int cnt=0;

        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
            cnt+=st.size();
        }
        cout<<cnt<<endl;
        
    }
    
     

    return 0;
}