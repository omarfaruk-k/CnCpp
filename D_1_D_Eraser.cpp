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
        int n,p;cin>>n>>p;
        string c;cin>>c;
        int cnt=0;


        for (int i = 0; i < n; i++)
        {
            if (c[i]=='B')
            {
                cnt++;
                
                for (int j = 0; j < p; j++)
                {
                    c[i+j]='W';
                    if (i+j>n) break;

                    
                }
                
            }
            
        }
        cout<<cnt<<endl;
        
    }
    
     

    return 0;
}