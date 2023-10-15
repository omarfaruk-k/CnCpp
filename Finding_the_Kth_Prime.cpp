#include<bits/stdc++.h>
using namespace std;
#define ll long long int


ll max_n=10000000;
bool is_prime[10000000];
ll prime[5000000];
void sieve(){
    for (ll i = 0; i <=max_n; i++)
    {
        is_prime[i]=1;
    }
    
    is_prime[0]=0;
    is_prime[1]=0;

    for (ll i = 2; i*i<=max_n; i++)
    {
        if(is_prime[i]==1){
            for (ll j = i*i; j <= max_n; j+=i)
            {
                is_prime[j]=0;
            }
            
        }
    }

    ll j=1;
    prime[0]=2,prime[1]=3;

    for (ll i = 3; i <=max_n;i+=2)
    {
        if(is_prime[i]==1){
            prime[j]=i;
            j++;
        
    }
    }

    
}

int main(){

    sieve();
    ll a,count=0;
    cin>>a;
    while (a--)
    {
        ll n;
        cin>>n;
        cout<<prime[n-1]<<endl;

        
    }
    

    return 0;
}