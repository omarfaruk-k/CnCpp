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
    int a,b;cin>>a>>b;
    int uttor=a;

    
    while ((a/b) != 0)
    {
        uttor += (a/b);
        a = a/b;
    }
    
    cout<<uttor<<endl;    
     

    return 0;
}