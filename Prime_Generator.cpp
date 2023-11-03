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

int maxx=1000000000;
int prime[1000000000];

void sieve(){
    for(int i=0; i<=maxx; i++) prime[i]=1;

    prime[0]=prime[1]=0;

    for (int i = 2; i*i<=maxx; i++)
    {
        if(prime[i]==1){
            for (int j = i*i; j <= maxx; j+=i)
            {
                prime[j]=0;
            }           
        }
    }
}


void printprime(int n, int m){
    for (int  i = n ; i <= m; i++)
    {
        if(prime[i]==1) cout<<i<<endl;
    }
    
}


int32_t main(){
    sieve();
    int tc;cin>>tc;

    while (tc--)
    {
       int n,m;
       printprime(n,m);
       cout<<endl; 
    }
    
     

    return 0;
}

