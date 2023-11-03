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

vec v;

void oddV(int n){
    for (int i = 1; i <= n; i++)
    {
        if(i%2!=0) v.pb(i);
    }
}

void evenV(int n){
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0) v.pb(i);
    }
}


int32_t main(){
    int n,x;cin>>n>>x;
    int hulf;
    if(n%2==0) hulf=n/2;
    else hulf=(n/2)+1;

    
    if(x<=hulf){
        cout<<(2*x)-1<<endl;
    }
    else {
        x-=hulf;
        cout<<2*x<<endl;
    }
     
    


    
     

    return 0;
}