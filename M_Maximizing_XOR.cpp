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

int maximizingXOR(int a, int b){
    int maxx=0;
    for (int i = a; i <=b; i++)
    {
        for(int j=i;j<=b;j++){
            int xoor=i^j;
            if(xoor>maxx) maxx=xoor;
        }
    }
    return maxx;
}

int32_t main(){
    int a,b;cin>>a>>b;
    int ans=maximizingXOR(a,b);

    cout<<ans<<endl;
    
     

    return 0;
}