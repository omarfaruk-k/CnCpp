#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,t,count=1;
    cin>>t;
    while (t--)
    {   
        cin>>a>>b>>c;
        cout<<"Case "<<count<<": Sum of "<<a<<", "<<b<<" and "<<c<<" is "<<a+b+c<<endl;
        count++;
    }
    

    return 0;
}