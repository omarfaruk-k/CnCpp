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
        int a,cnt=0;
        cin>>a;
        int i=3;
        while (i--)
        {
            int b;cin>>b;
            if(b>a) cnt++;
        }
        cout<<cnt<<endl;
        
    }
    
     

    return 0;
}