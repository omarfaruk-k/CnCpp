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

    int cnt=0;

    while (tc--)
    {
        string s;cin>>s;

        if(s[0] == 'I') cnt+=20;
        else if(s[0] == 'D') cnt+=12;
        else if(s[0] == 'O') cnt+=8;
        else if(s[0] == 'C') cnt+=6;
        else if(s[0] == 'T') cnt+=4;
    }
    
    cout<<cnt<<endl;
     

    return 0;
}