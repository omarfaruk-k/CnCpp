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
        int a,b,c;cin>>a>>b>>c;
        // int sum=a+b+c;
        // //if(sum%2==0) cout<<"First"<<endl;
        //if(sum%2!=0  || (b==0 && a>c) )
        if(a==b) {
            if(c%2!=0) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
            }
        else if(a>b)cout<<"First"<<endl;
        else  cout<<"Second"<<endl;
     }
    
     

    return 0;
}