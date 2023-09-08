#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int  tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        if(n<31) cout<<"NO"<<endl;
        else if(n-30 == 14 || n-30==10 || n-30==6){
             cout<<"YES"<<endl<<"6 10 15 "<<n-31<<endl;
        }
        else{
            cout<<"YES"<<endl<<"6 10 14 "<<n-30<<endl;;
        }
    }
    

    return 0;
}