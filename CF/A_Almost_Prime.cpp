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

int arr[3001];
int n=3001;
int prime[3001];

void sieve(){
    for(int i=0; i<=n; i++){
        arr[i]=1;
    }

    arr[0]=0; arr[1]=0;

    for (int i = 2; i*i <= n; i++)
    {
        if(arr[i]==1){
            for (int j = i; j <= n; j+=i)
            {
                arr[j]=0;
            }
            
        }
    }

    int j=0;
    for (int i = 2; i <= n; i++)
    {
        if(arr[i]==1){
            prime[j]=i;
            j++;
        }
    }
    
}




int32_t main(){
    
    sieve();

    int a;cin>>a;
    int cnt=0;

    for (int  i = 0; i < a; i++)
    {
        if(prime[i])
    }
    
     

    return 0;
}