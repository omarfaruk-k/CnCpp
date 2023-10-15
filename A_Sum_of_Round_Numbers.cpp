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

    while (tc--)
    {
        string n;cin>>n;
        if (n.length()<=1) cout<<1<<endl<<n<<endl;
        else
        {
            bool round = true;
            for (int i = 1; i < n.length(); i++)
            {
                if (n[i]!=0)
                {
                    round=false;
                }
                
            }
            if (round==true)
            {
                cout<<1<<endl<<n<<endl;
            }
            else
            {
                n.reserve();
                cout<<n.length()<<endl;
                for (int i = 0; i < n.length(); i++)
                {
                    if(n[i]!=0){
                        cout<<n[i];
                        for (int j = 0; j < i; j++)
                        {
                            cout<<'0';
                        }
                        
                    }
                }cout<<endl;
                
            }
            
            
            
        }
        
    }
    
     

    return 0;
}