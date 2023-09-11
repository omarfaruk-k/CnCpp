#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    int d=a+b+c;
    int e=(a+b)*c;
    int f=a*(b+c);
    int g=a*b*c;

    int h=max(d,e);
    int i=max(f,g);

    cout<<max(h,i)<<endl;

    return 0;
}