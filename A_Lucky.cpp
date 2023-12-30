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
        int sum1=0,sum2=0;

        for (int i = 0; i < 3; i++)
        {
            sum1+=(s[i]-'0');
        }

        for (int i = 3; i < 6; i++)
        {
            sum2+=(s[i]-'0');
        }

        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        
    }
    
     

    return 0;
}