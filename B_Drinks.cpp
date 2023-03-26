#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double m,p=0,res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        p+=m;
    }
    res=(p/(n*100))*100;
    cout<<fixed<<setprecision(12)<<res<<endl;

    return 0;
}