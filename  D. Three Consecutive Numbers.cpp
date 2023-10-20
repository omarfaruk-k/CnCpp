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
    int n;cin>>n;
    
    int y=n/3;
    int x=y-1;
    int z=y+1;

    if((y+x+z)==n) cout<<x<<" "<<y<<" "<<z<<endl;
    else cout<<-1<<endl;

    return 0;
}