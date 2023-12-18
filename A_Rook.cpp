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
        
       // char a = s[1];
        

        for (int i = 1; i <= 8; i++)
        {
            if(i==s[1]-'0') continue;
            cout<<s[0]<<i<<endl;
        }

        string a = "abcdefgh";

        for (int i = 0; i < 8; i++)
        {
            if(a[i]==s[0]) continue;
            else cout<<a[i]<<s[1]<<endl;;

        }
        
        
    }
    
     

    return 0;
}