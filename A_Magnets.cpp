#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=1;
    cin>>n;
    n=n-1;
    string a,b;
    cin>>a;
    while (n--)
    {
        cin>>b;
        if(a!=b) count++;
        a=b;

    }
    cout<<count<<endl;

    return 0;
}