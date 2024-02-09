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
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            int a;cin>>a;
            st.insert(a);
        }

        int s = st.size();

        if(s%2==n%2) cout<<s<<endl;
        else cout<<s-1<<endl;
        
    }
    
     

    return 0;
}