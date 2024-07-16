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
        string s;
        cin>>s;

        int i = stoi(s);
        ld dbl = stold(s);

        if (i==dbl) cout<<1<<endl;
        else {
            dbl = dbl-i;
            cout<<1/dbl<<endl;
        }
    }
    
     

    return 0;
}