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
        int a,b;

        cin>>a>>b;

        int tot = 0;

        int up = 0;
       
       for (int i = 0; i < a; i++)
       {
        int x;cin>>x;
            tot+=x;
            up = up+ ((x+b-1)/b);
       }
        

        cout<<(tot+b-1)/b<<" "<<up<<endl;
        
        
    }
    
     

    return 0;
}