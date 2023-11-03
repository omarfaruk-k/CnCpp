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
    int sum1=0,sum2=0,sum3=0;
    while (tc--)
    {
        int a,b,c;cin>>a>>b>>c;
        sum1+=a;
        sum2+=b;
        sum3+=c;
    }

    if(sum1==0 && sum2==0 && sum3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
     

    return 0;
}