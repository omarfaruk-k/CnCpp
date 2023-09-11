#include<bits/stdc++.h>
using namespace std;

int main(){

    long long res=0,n;
    cin>>n;

    if(n%2==0){
        res=n/2;
    }
    else
    {
        n++;
        res=-(n/2);
    }

    cout<<res;
}