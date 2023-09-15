#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,m;
    cin>>a>>m;
    if(a>m) swap(a,m);
    if(a%2==0) cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;

    return 0;
}