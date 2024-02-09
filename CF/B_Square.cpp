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
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(a>b) swap(a,b);
        if(c>d) swap(c,d);

        if((a+c)==b && b==d) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    
     

    return 0;
}