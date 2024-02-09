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

int mx = 10000000;
bool arr[10000000];


void sieve(){
    for (int i = 0; i <= mx; i++) arr[i] = 1;
    arr[0]=arr[1]=0;

    for (int i = 2; i*i <= mx; i++)
    {
        if(arr[i]==1){
            for (int j = i*i; j <= mx ; j+=i)
            {
                arr[j]=0;
            }
            
        }
    }
    
    
}


void prime_print(int n){
     bool ans = false;

     while (arr[n]!=1)
     {
        n++;
     }

     cout<<n<<endl;
     
}


int32_t main(){

    sieve();

    int n;cin>>n;

    prime_print(n);
    
     

    return 0;
}