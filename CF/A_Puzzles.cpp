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

    int n,m,i,ans,a[1000];
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    ans=a[n-1]-a[0];
    for(i=1;i<=m-n;i++){
        if(a[i+n-1]-a[i]<ans) ans=a[i+n-1]-a[i];
    }
    cout<<ans;
    return 0;
    
     

    return 0;
}