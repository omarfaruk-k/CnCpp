#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n==1) return 0;

    for(int i=2;i*i<=n;i++){
        if(n%i==0) return 0;
    }
    return 1;
}


int main(){
    int t,n;
    cin>>t;

    while (t--)
    {
        cin>>n;
        int res=isPrime(n);
    if(res==0) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
    }
    



    return 0;
}