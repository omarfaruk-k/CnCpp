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
        string s;cin>>s;

        int cntA = 0;
        int cntB = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='A') cntA++;
            else cntB++;
        }

        if(cntA>cntB) cout<<'A'<<endl;
        else cout<<'B'<<endl;

        
    }
    
     

    return 0;
}