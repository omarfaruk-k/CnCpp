#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int tot, brbe, koyta, prev, res;
        cin>>tot>>brbe>>koyta>>prev;
        if(brbe>koyta){
        res=prev+(koyta*10);
        }
        else{
            res=(prev+(brbe*10)+((koyta-brbe)*5));
        }
        if(tot==koyta) res+=20;
        cout<<res<<endl;
    }
    
}