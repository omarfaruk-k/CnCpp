#include<bits/stdc++.h>
using namespace std;

int is_prime[1000000];
void sieve(){
    int max_n=1000000;
    for (int i = 0; i < max_n; i++)
    {
        is_prime[i]=1;
    }
    
    is_prime[0]=0;
    is_prime[1]=0;

    for (int i = 2; i*i<=max_n; i++)
    {
        if(is_prime[i]==1){
            for (int j = i*i; j < max_n; j+=i)
            {
                is_prime[j]=0;
            }
            
        }
    }
    
}

int main(){

    sieve();
    int a;
    cin>>a;
    while (a--)
    {
        if(is_prime[a]==1) cout<<"Prime"<<endl;
        else cout<<"Not prime"<<endl;
    }
    

    return 0;
}