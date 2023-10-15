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
    int t,b;cin>>t>>b;;
    int big=max(t,b);
    int sml=min(t,b);

    int rem = (big-sml)/2;

    cout<<sml<<" "<<rem<<endl;

    
     

    return 0;
}