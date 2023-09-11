#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int cnt=0;
    int nx=0;

    if(n<6) cout<<1<<endl;

    else
    {   
    cnt=n/5;
    n=n-(cnt*5);
    if (n!=0)
    {
        cnt++;
    }
    
    cout<<cnt<<endl;
    }
    

    return 0;
}