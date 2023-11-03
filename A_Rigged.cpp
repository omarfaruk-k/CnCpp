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
        n--;
        int a,b;cin>>a>>b;
        bool flg=true;

        while (n--)
        {
            int i,j;cin>>i>>j;
            if(i>=a && j>=b)  flg=false;

        }
        if(flg) cout<<a<<endl;
        else cout<<-1<<endl;
        
    }
    
     

    return 0;
}