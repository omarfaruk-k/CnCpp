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
        int a;cin>>a;
        int odd=0;
        int even=0;

        
        for (int i = 0; i < a; i++)
        {
            int accha; cin>>accha;
            if(accha%2 == 0) even++;
            else odd++;
        }
        
        if(odd == 0 ) cout<<"NO"<<endl;
        else if(odd == a && a%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
    
     

    return 0;
}