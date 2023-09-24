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
        int n;cin>>n;
        int sml0=INT_MAX,sml1=INT_MAX,sml=INT_MAX,cnt=0;
        while (n--)
        {
           int a;
           string s;
           cin>>a>>s;
           if (s[0]=='1' && s[1]=='1')
           {
            sml=min(sml,a);
            cnt++;
           }
           else if(s[0]=='1' && s[1]=='0'){
            sml0=min(sml0,a);
           }
           else if(s[0]=='0' && s[1]=='1'){
            sml1=min(sml1,a);
           }
           

        }
           if(cnt!=0) cout<<min((sml0+sml1),sml)<<endl;
           else if(sml0==INT_MAX || sml1==INT_MAX) cout<<-1<<endl;
           else cout<<sml0+sml1<<endl;
        
    }
     

    return 0;
}