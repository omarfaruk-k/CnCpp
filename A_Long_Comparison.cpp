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

        while (b--)
        {
            a*=10;
        }
        while (d--)
        {
            c*=10;
        }

        if(a>c) cout<<">"<<endl;
        else if(a<c) cout<<"<"<<endl;
        else cout<<"="<<endl;        
        
        

    }
    
     

    return 0;
}