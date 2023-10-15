#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  v;
typedef pair<int,int> pll;
typedef vector<pll> vp;



int32_t main(){
    int tc;cin>>tc;
    int cs=1;
    while (tc--)
    {
        int n;
        cin>>n;
        string num;
        cin>>num;
        string num2,ans="";
        while (n--)
        {
            int cnt=0;
            cin>>num2;
            
            if(num.length()==num2.length() && cnt<2 && ans==""){
                for (int i = 0; i <= num.length(); i++)
                {
                    if(num[i]!=num2[i]) cnt++;
                    if(cnt>1) break;
                }
                    if(cnt==1) ans=num2;
                
            }
        }
        cout<<"Case "<<cs<<":"<<endl<<num<<endl<<ans<<endl;
        cs++;
        
    }
    
     

    return 0;
}




