#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;cin>>t;
    while (t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        if(n==1){
            cout<<a<<endl;
        }
        else if(a<(float)b/2){
            cout<<n*a<<endl;
        }
        else{
            ll bt2=n/2; bt2*=b;
            n=n%2;
            ll bt1= n*a;

            cout<<bt1+bt2<<endl;
        }
    }
    

    return 0;
}