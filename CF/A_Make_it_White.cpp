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
        string s;cin>>s;


        int pos1=0,pos2=0;

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='B') {
                pos1=i+1;
                break;
                }
                
        
        }

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='B') pos2 = i+1;
        }


        int ans = pos2-pos1;

        cout<<ans+1<<endl;
        
        

    }
    
     

    return 0;
}