#include<bits/stdc++.h>
using namespace std;

//#define int long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define pop pop_back

typedef vector<int>  vec;
typedef pair<int,int> pr;
typedef vector<pr> vecpair;

void sum(int n, int k){
    int sm=0;
    int a=n;
    while (a!=0)
        {
            sm+=a%10;
            a=a/10;
        }

        if(sm%k!=0)  sum(n+1,k);
        else  cout<<n<<endl;
}



int32_t main(){
    int tc;cin>>tc;

    while (tc--)
    {
        int n,k;
        cin>>n>>k;
        int sm=0;

        sum(n,k);

        //cout<<ans<<endl;

                
        
    }
    
     

    return 0;
}